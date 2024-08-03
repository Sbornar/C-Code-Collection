// 2 > write a program which acept string from user and accept one
//     character . Return frequency of that character
//input : "Marvellous Multi OS"
//         "M"
//output:2
//input : "Marvellous Multi OS"
//         "W"
//ouput : 0

#include<stdio.h>


int CountChar(char *str , char cValue)
{
    int Cnt = 0;

    while (*str != '\0')
    {
        if(*str == cValue)
        {
            Cnt++;
        }
        str++;
    }
    return Cnt;
    
}

int main()
{
   
   char Arr[20] , ch='\0';
   int iRet = 0;
   
   printf("Enter string:\n");
   scanf("%[^'\n']s",Arr);
   
   printf("entre character which you want to find:\n");
   scanf(" %c",&ch);

   iRet = CountChar(Arr , ch);

   printf("%d\n",iRet);

    return 0;

}