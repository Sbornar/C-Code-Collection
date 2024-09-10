// 5 : write a program which accept one number from user and on its first
// 4 bits . return modified number.
// input 73
//output : 79

#include<stdio.h>

typedef unsigned int UINT;


UINT OFFBit(UINT iValue)
{
    
    unsigned int iResult = 0;
    unsigned int iMask= 15;



    return iValue | iMask;

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

