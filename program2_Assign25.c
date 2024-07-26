// 2 > write a program which accept string from user and count 
//  number of small characters
//input : "Marvellous"
//output : 9
#include<stdio.h>

int CountSmall(char *Str)
{
    int iCnt = 0;
    
    if(*Str == '\0')
    {
        printf("String are empty...");
    }

    while (*Str !='\0')
    {
    
        if((*Str >='a') && (*Str <='z'))
        {
            iCnt++;
        }
       Str++;
    
    }
    return iCnt;
}
int main()
{

   char Arr[20];
   int iRet = 0;

   printf("Enter string");
   scanf("%[^'\n']s",Arr);

   iRet = CountSmall(Arr);

   printf("Small letter is :%d",iRet);

    
    return 0;
}