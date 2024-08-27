// 1 > write a program which accept string from user and
//   copy that characters of that string into another string
// in reverse order
//input: "Marvellous Python"
//output : "nohtyp suollevraM"

#include<stdio.h>


void StrCpyRev(char *src, char *dest)
{
    int iLength = 1 ,i =1;

    while(*src != '\0')
    {
           src++;
           iLength++;
    }
   src--;

    
    while(i < iLength)
     {
        *dest = *src;
       src--;
        i++;

     }
     
     *dest = '\0';
     printf("%s",dest);
}
int main()
{
   char arr[30] = "Marvellous Python";
   char brr[30];

   StrCpyRev(arr , brr);

   printf("%s",brr);

   return 0;
}