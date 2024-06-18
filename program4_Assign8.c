// 4 : write a program which accept temperature in fahrenheit and convert it into
//   celsius . (1 celsius = (fahreheit -32) * (5/9))
// input  :10
// output : -12.222 (10 - 32) *(5/9)
// input : 34
//  output : 1.11111  (34 -32) * (5/9)


#include<stdio.h>

double FhtoCs(float fTemp)
{
     double dtemp =fTemp - 32;
     double dtemp1 = dtemp*5;
     double dtemp2 = dtemp1/9;
     return  dtemp2;
}

int main()
{
   
    int fValue1 = 0;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit");
    scanf("%d",&fValue1);

    dRet = FhtoCs(fValue1);

    printf("%d fahrenheit to %f celsius",fValue1,dRet);

    return 0;
}