// 3 :write a program which accept one number from user and toggle
//7th bit of that number > return  modified number

// input : 137
// output : 201

#include<stdio.h>

typedef unsigned int UINT;


UINT OFFBit(UINT iValue)
{
    //unsigned int pos = 7;
    unsigned int iResult = 0;
    unsigned int iMask= 0;

    iMask = 1 << 6;

    return iValue ^ iMask;

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

