// 1 : write a program which accept one number from user and off 7th bit
//  of that number if it is on . return modified number.
//  input : 79
//  output : 15


#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;


UINT OFFBit(UINT iValue)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0;
    unsigned int position =6;

    iMask = ~(1<<position);
     
     printf("%u\n",iMask);
    return iValue & iMask;



}
int main()
{
    unsigned int iRet = 0;
    unsigned int iNo = 0;

    printf ("Enter number");
    scanf("%d",&iNo);

    iRet = OFFBit(iNo);
    
    printf(":::%u:::",iRet);

    return 0;

}

