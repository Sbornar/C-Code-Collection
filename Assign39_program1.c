// 1 : write a program which accept one number from user and count number
// of ON(1) bits in it without using % and / operator.
// input : 11
// output : 3

#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iValue)
{
    unsigned int iResult = 0;
    
    while(iValue > 0)
    {
        
        
            if(iValue & 1)
            {
                iResult++;
            }
        iValue = iValue >> 1;
    }
    return iResult;


}
int main()
{
    unsigned int iNo= 0;
    unsigned int iRet = 0;

    printf("Enter number");
    scanf("%d",&iNo);

    iRet = CountOne(iNo);

    printf("Count is: %u",iRet);

    return 0;

}