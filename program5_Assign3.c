// 5 . accept on character from user and check whether that character is vowel(a,e,i,o,u) or not
//inpute : E  output :TRUE
//inpute : d  output : FALSE
//
//

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cValue)
{
    if(('a'== cValue || 'e'== cValue || 'i'== cValue || 'o'== cValue || 'u'== cValue  ))
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

    printf("Enter the  character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet== TRUE)
    {
        printf("it is Vowel");
    }
    else
    {
       printf("it is not Vowel");
    }

    return 0;
}