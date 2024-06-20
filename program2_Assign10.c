// 2 > write a program which accept number from user and check whether it contains 0
//     innit or not
//input : 2395
//output : There is no zero
//input : 1018
//output : It Contains zero
//input : 9000
//output : it Contains zero
//input : 10687
///output : it Contains zero


#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool CheckZero(int iNo)
{
    int iDigit = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
         iDigit = iNo%10;
         if(iDigit == 0)
         {
            return 1;
         }
         iNo = iNo/10;
    }
    return 0;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("it Contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
