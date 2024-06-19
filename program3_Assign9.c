// 3 > write a program which accept range from user and return addtion of all
//     number in between that range (Range should contains positive number only)
//input : 23 30
//output : 212
//input : 10 18
//output : 126
//input :-10 2
//output :invalid range

#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int iCnt = 0 , iSum =0;
    if(iStart>iEnd || iStart < 0)
    {
        printf("invalid Rnage");
        printf("\n");
    }
    else
    {
        for(iCnt = iStart ;iCnt <= iEnd ; iCnt++ )
        {
             iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ,iRet = 0;

    printf("Enter number first :");
    scanf("%d",&iValue1);

    printf("Enter second number");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Sum of range of number %d:",iRet);

    return 0;
}