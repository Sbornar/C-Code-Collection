// 5 : write a program which accept N and print First 5 nultiples of N
//
//input : 4
//output : 4 8 12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}