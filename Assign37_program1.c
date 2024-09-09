// 1 : write a program which check whether 15th bit is ON or OFF

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue , UINT IMask)
{

     unsigned int  iResult = 0;

     iResult = iValue & IMask;

     if(iResult == IMask)
     {
        return 1;
     } else
     {
        return 0;
     }

}
int main()
{
    unsigned int iNo = 30;
    unsigned int Mask  = 8;
    BOOL bRet = FALSE;

     bRet  = ChkBit(iNo , Mask);

     if(bRet == TRUE)
     {
        printf("15th bit is On");

     }else
     {
         printf("15th bit is OFF");
     }

     return 0;
}