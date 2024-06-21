// 2 > write a program which accept number from user and return the
//    count of odd digits
//input : 2395
//output : 3
//input : 1018
//output : 2
//input : -1018
//output : 2
//input : 8462
//output : 0

#include<stdio.h>

int CountOdd(int iNo)
{
    int Digit = 0 , Count = 0;

    while(iNo != 0)
    {
        Digit = iNo%10;
        if(Digit%2 != 0)
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

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);
    return 0;
}