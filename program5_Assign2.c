// 5. accept number from user and check whether number is even or odd
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOl;

BOOl CheckEven(int iNo)
{
     if(iNo % 2 == 0)
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
    int iValue = 0;
    BOOl bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);
    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }

    return 0;
}
