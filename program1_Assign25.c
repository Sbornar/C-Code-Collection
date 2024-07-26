// 1 > write a program which accept string from user and count
//    number of capital characters
// input : "Marvellous Multi OS"
//output : 4


#include<stdio.h>
#include<string.h>
int CountCapital(char *str)
{
   int iCnt = 0;
   
   if(*str == '\0')
   {
      printf("String is empty...");
   }
   while (*str!='\0')
   {
       
       if((*str >= 'A') && (*str <= 'Z'))
       {
          iCnt++;
       }
       str++;
   }
   
   return iCnt;

}
int main()
{
   char Arr[20];
   int iRet = 0;

   printf("Enter string");
   scanf("%[^'\n']s",Arr);

   iRet = CountCapital(Arr);

    printf("Capital latter is :\t%d",iRet);

    return 0;


}