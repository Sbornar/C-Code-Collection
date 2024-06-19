// 2 > write a program which accept range from user and display all even 
//     number in between that range.
//  input : 23 35
//  output: 24 26 28 30 32 34
//  input : 10 10
//  output:  10
//   input:-10 2
//  output : -10 -8 -6 -4 -2 0 2
//  input : 90 18
//  output : invalid range

#include<stdio.h>
void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;
    if(iStart>iEnd)
    {
        printf("invalid range");
    }
    else
    {
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            if(iCnt%2==0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
}
int main()
{
    int iValue1 = 0 , ivalue2 = 0 ;

    printf("Enter first number:");
    scanf("%d",&iValue1);

    printf("Enter second number:");
    scanf("%d",&ivalue2);

    RangeDisplayEven(iValue1,ivalue2);

    return 0;
}