// 4. write a program which accept string from user and copy the
// contents into another string by removing extra white spaces

// input : "Marvellous   multi   os";
// output : "Marvellous multi os";

#include<stdio.h>

void StrCpyX(const char *src,char *dest)
{
     int iCnt = 0;

     while(*src != '\0')
     {
        if(*src != ' ')
        {
            *dest = *src;
            iCnt=1;
            dest++;
        }
        if((*src == ' ') &&(iCnt == 1))
        {
            *dest = *src;
            iCnt++;
            dest++;
        }

        src++;
     }
     *dest = '\0';
}
int main()
{
   char arr[30]="Marvellous   multi   os";
   char brr[30];

   StrCpyX(arr,brr);

   printf("%s",brr);
   return 0;

}