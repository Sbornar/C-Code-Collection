// 5 ; write a program which accept area in square feet and convert it into square
//    meter (1 square feet = 0.0929 square meter)
// input  : 5
//  output : 0.464515
//input :  7
// output : 0650321
//
#include<stdio.h>
double SquareMeter(int iValue)
{
    return 0.0929 * iValue;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d square feet is %f squareMeter",iValue,dRet);

    return 0;

}