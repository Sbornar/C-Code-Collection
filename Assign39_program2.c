// 2 : write a program which accept two number from user and display
// position of common ON bits from that two numbers

// input : 10   15  (1010     1111)
// output : 2    4

#include<stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1 , UINT iNo2)
{   
    unsigned int iResult1 = 0,iResult2 = 0;
    while((iNo1 > 0 )|| (iNo2 > 0))
    {
        if (iNo1 & 1)
        {
            iResult1++;
        }
        if(iNo2 & 1)
        {
            iResult2++;
        } 
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        
    }
    printf("%u \t %u",iResult1,iResult2);
}
int main()
{
    unsigned int iNo1= 0 , iNo2 = 0;

    printf("Enter first number");
    scanf("%u",&iNo1);

    printf("Enter second number");
    scanf("%u",&iNo2);

    CommonBits(iNo1,iNo2);

    return 0;
}