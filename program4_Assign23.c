// 4 > Accept character from user and check whether it is
//    small case or not (a - z)
//  input : g
//  output : TRUE
//  input : D
//   output : FALSE

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool CheckSmall(char ch)
{
   if(ch >= 'a' && ch <= 'z')
   {
    return 1;
   }
   else
   {
    return 0;
   }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character");
    scanf("%c",&cValue);

    bRet = CheckSmall(cValue);

    if(bRet == TRUE)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }


    return 0;
}