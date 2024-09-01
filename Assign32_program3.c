// 3. write a program which accept string from user and print below
//    pattern
//    input : "Marvellous"
//    output :M
//            M a
//            M a r
//            M a r v
//            M a r v e
//            M a r v e l
//            M a r v e l l
//            M a r v e l l o
//            M a r v e l l o u
//            M a r v e l l o u s

#include<stdio.h>

void pattern(char *str)
{
    char *dest = NULL,*src = NULL;
    int iCnt = 1,iNo = 1  ,iCount = 1;
    dest = str;
    src= str;

    while(*src !='\0')
    {
        iCnt++;
        src++;
    }

   while(iCnt > iNo)
   {  
       while((*dest !='\0') && (iNo >= iCount))
       {
           printf("%c\t",*dest);
           dest++;
           iCount++;
       }
       printf("\n");
       iCount=1;
       dest=str;
       iNo++;
   }


}
int main()
{
    char arr[30]="Marvellous";

    pattern(arr);

    return 0;
}