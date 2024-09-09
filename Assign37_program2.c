// 2 : write a program which check whether 5th & 18 th bit is on 
//  ot OFF


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue )
{
    unsigned int iResult = 0;
    unsigned int iMask = 262176;
    

    iResult = iValue & iMask;
    

    // printf("%u\n",iResult1);


    if(iResult == iMask)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    unsigned int INo = 60;
   
    
    BOOL bRet = FALSE;

    bRet = ChkBit(INo);

     printf("%d\n",bRet);
    if(bRet == 1)
    {
        printf("5th an 18th bit is ON");
    }  
    else
    {
       printf("5th and /or  18th bit are OFF");
    }
      
    return 0;
}
