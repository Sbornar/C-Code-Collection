// 5 > write a program which accept number from user and count frequency of such a
//    digit which are less than 6
// input : 2395
// output : 3
// input : 1018
//  output : 3
//  input : 9440
//  output : 3
//  input : 96672
//   output : 1

#include<stdio.h>

int Count(int iNo)
{
    int Digit = 0 , Count = 0;

    while(iNo != 0)
    {
        Digit = iNo%10;
        if(Digit<6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}