// 3 > write a program which accept string from user and accept
//   one character . return index of first occurrence of that
//  character.
//input : Marvellous Multi OS
//        "M"
//ouput : 0
//input : Marvellous Multi OS
//        "W"
//ouput : -1
//input : Marvellous Multi OS
//        "e"
//ouput : 4

#include<stdio.h>


int FirstChar(char *str , char cValue)
{
    int Cnt = 0;

    while (*str != '\0')
    {
        if(*str == cValue)
        {
            return Cnt;
        }
        Cnt++;
        str++;
    }
    return -1;
    
}

int main()
{
   
   char Arr[20] , ch='\0';
   int iRet = 0;
   
   printf("Enter string:\n");
   scanf("%[^'\n']s",Arr);
   
   printf("entre character which you want to find:\n");
   scanf(" %c",&ch);

   iRet = FirstChar(Arr , ch);

   printf("%d\n",iRet);

    return 0;

}