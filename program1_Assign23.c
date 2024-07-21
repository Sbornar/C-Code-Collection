// 1 > accept character from user and check whether it is alphabet
//     or not (A - Z  a - z)
//input : F
//output : TRUE
//input : &
//output : FALSE
//

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z' )||( ch >= 'a' && ch <= 'z'))
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

    printf("Enter character:");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}