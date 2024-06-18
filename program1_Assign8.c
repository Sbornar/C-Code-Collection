// 1 : wriete a progarm which accept radius of circle from user and calculate its area
//    consider value of PI as 3.14 (Area = PI * Radius * Radius)
//input : %.3
//output : 88.2026
//input : 10.4
//output : 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
     const float fPI = 3.14;
     double total = 0.0;
    //  total = fPI * fRadius * fRadius;
    return fPI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0f;
     double dRet = 0.0;

     printf("Enter radius");
     scanf("%f",&fValue);

     dRet = CircleArea(fValue);

     printf("area of circle %f",dRet);

     return 0;

}