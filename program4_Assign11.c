// 4 > write a program which accept number from user and return multipication
//     of all digits
//input : 2395
//output : 270
//input : 1018
//output : 8
//input : 9440
//output :144

#include<stdio.h>

int MultDigit(int iNo)
{
    int Digit = 0 , MUltCOUNT = 1;

    while(iNo!= 0)
    {
        Digit = iNo%10;
        if(Digit != 0)
        {
            MUltCOUNT = MUltCOUNT * Digit;
        }
        iNo = iNo/10;
    }

    return MUltCOUNT;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("%d", iRet);

    return 0;
}