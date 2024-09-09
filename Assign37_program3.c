// 3 : write a program which check whether 7th & 15th & 21th,28th
// bit is on or off.

// iNo = 20;

// iMask = 270549504  additionof all four position

// 7th= 128
// 15th = 32768
// 21th=2097152
// 28th =268435456


#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iValue)
{
    unsigned int iMask = 270549504 ;
    unsigned int iResult = 0;
    
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
   
   unsigned int iNo = 0;

   BOOL bRet = FALSE;

   printf("Enter numbre");
   scanf("%d",&iNo);

   bRet = ChkBit(iNo);

   if(bRet == 1)
   {
      printf("all bits are ON");
   }else
   {
      printf("some of the bits are on or some of the bits are off\n");
      printf("Or all bits are off");
   }


    return 0;
}