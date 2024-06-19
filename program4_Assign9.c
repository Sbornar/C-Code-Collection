// 4 > write a program wich accept range from user and return addition of all even
//    number in between that range (Range should contain positive number only)
// input : 23 30
//output : 108
//input : 10  18
//output : 70
//input : -10 2
//output : invalid range
//input :  90  18
//output : invalid range


#include<stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iCnt = 0 , iSum = 0;

    if(iStart > iEnd || iStart < 0)
    {
        printf("invalid range");
        printf("\n");
    }
    else
    {
        for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
        {
            if(iCnt%2 == 0)
            {
                iSum += iCnt; 
            }
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;

    printf("Enter first number");
    scanf("%d",&iValue1);

    printf("Entre second number");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}