// 4: write a program which check whether 7th & 8th & 9th bit is
// on or OFF

// iNO = 45;
// iMask = 896

// 7th = 128
// 8th = 256
// 9th = 512

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
    unsigned int iMask = 896;
    unsigned int iResult =0;

    iResult = iValue & iMask;

    if(iResult == 1)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int main()
{
     int iNo= 0;
    
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iNo);

    bRet = ChkBit(iNo);

    if(bRet == 1)
    {
        printf("All bits are on");
    }
    else
    {
        printf("some bits are on some bits are off");


    }
    return 0;

}