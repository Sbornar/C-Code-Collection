// 4 > write a program which accept number from user and count frequency of 4 in it
//   input : 2395
//   output : 0
//   input : 1018
//   output : 0
//   input : 9440
//   output : 2
//   input : 922432
//   output : 1

#include<stdio.h>

int CountFour(int iNo)
{
    int Digit = 0 , Count = 0;

    while (iNo!= 0)
    {
        Digit = iNo%10;
        if(Digit == 4)
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

    printf("Enter the number");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}