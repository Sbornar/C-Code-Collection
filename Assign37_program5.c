// 5: write a program which check whether first and last bit 
// is on or off . first bit means bit number 1 and last bit means
// bit number 32
// on or OFF

// iNO = 45;
// iMask = 2147483649

// 0th = 1
// 32th = 2147483648

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
    unsigned int iMask =  2147483649;
    unsigned int iResult =0;

    iResult = iValue & iMask;

    printf("%d::::",iResult);

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