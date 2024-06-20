// 3 > write a progarm which accept number from user and count frequency of 2 in it
//input : 2395
//output : 1
//input : 1018
//output : 0
//input : 9000
//output : 0
//input : 922432
//output : 3


#include<stdio.h>

int CountTwo(int iNo)
{
    int Digit = 0 , Count = 0;

    while (iNo!= 0)
    {
        Digit = iNo%10;
        if(Digit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}