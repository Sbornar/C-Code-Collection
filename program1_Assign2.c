// 1. Accept one numbe from user and print that numbern of * on screen
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {

        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
    {
        int iValue = 0;
        printf("ENter number");
        scanf("%d",&iValue);

        Display(iValue);
        return 0;
    }
