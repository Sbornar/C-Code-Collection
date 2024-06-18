// 2 : write a program which accept width and height of rectangle from  user and calculate its area
//      (area = width * height)
// input : 5.3  9.78
//output : 51.834


#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
    return fWidth * fHeight;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("enter width");
    scanf("%f",&fValue1);

    printf("enter heigth");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("area of rectangle %f",dRet);

    return 0; 
}