// 3 : write a program to find Factorial of given number
//input : 5
//output : 120  (5 * 4 * 3 * 2 * 1)
//input : -5
//output : 120  (5 * 4 * 3 * 2 * 1)
//input : 4
//output : 24  ( 4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
{
     
    int  FactorialTotal = 1;  

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        FactorialTotal = FactorialTotal * iNo;
        iNo--;
    }
    return FactorialTotal;
    

}
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Entre number");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of nmber is %d",iRet);

    return 0;
}