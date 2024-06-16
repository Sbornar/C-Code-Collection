// 2 : Accept amount in US dollar and return its corresponding value in indian currency
//consider 1$ as 70 rupees
//input : 10
//output : 700
//input  : 3
//output : 210
#include<stdio.h>
int DollarTOINR(int iNo)
{
    return 70 * iNo;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet = DollarTOINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;

}