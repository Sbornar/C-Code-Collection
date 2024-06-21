// 3 > write a program which accept number from user and return the 
//     count of digits in between 3 and 7
//input : 2395
//output : 1
//input : 1018
//output : 0
//input : 4521
//output : 2
//input : 9922
//output : 0

#include<stdio.h>
int CountRange(int iNo)
{
    int Digit = 0 ,Count = 0;

    while(iNo!=0)
    {
        Digit = iNo%10;
        if(Digit >3 && Digit < 7)
        {
            Count++;
        }
        iNo = iNo/10;
    }
    return Count;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}