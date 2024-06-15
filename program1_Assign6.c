// 1 : write a progrma which accept number from user and if number is less than 50 then print small, 
//    if it is greater than 50 and less than 100 then printf medium
//    if it is greater than 100 then print large.
//input : 50
//output : medium

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small");
    }
    else if(iNo >=50 && iNo < 100)
    {
        printf("Medium");
    }else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}