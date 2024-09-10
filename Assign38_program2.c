// 2: write a program which accept one number from user and off 7th and 10 th
// bit of that number > return modified number

// input : 577
// output : 1

#include<stdio.h>

typedef unsigned int UINT;


UINT OFFBit(UINT iValue)
{
    //unsigned int pos = 7;
    unsigned int iResult = 0;
    unsigned int iMask= 0;

    iMask = ~((1<< 6) | (1<< 9));

    return iValue & iMask;

}
int main()
{
    unsigned int iNO = 0;
    unsigned int iRet = 0;

    printf("ENter number");
    scanf("%d",&iNO);

    iRet = OFFBit(iNO);

    printf("%u",iRet);

    return 0;
}

