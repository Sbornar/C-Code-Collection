// 2 > Accept Character from user and check whether it is
//   capital or Not (A - Z)
// input : F
//output : TRUE
//  input : d
//  output : FALSE

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlph(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = CheckAlph(cValue);

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