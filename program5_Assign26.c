// 5 > write a program which accept string from user and count
//   number of white spaces
//input : MarvellouS
//ouput : 0
//input : Marvellous InfoSystems
//ouput : 1
// input : marvellous inforsysytem by piyush manohar khairnnar
// ouput : 5

#include<stdio.h>

int  CountWhite(char *str)
{
    int iCnt = 0;
   while (*str != '\0')
   {
       if((*str == ' '))
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
   printf("Enter string..");
   scanf("%[^'\n']s",Arr);

   iRet = CountWhite(Arr);
   printf("%d",iRet);
    return 0;

}

