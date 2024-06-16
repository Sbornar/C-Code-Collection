// 5 : write a program which returns difference between Even Factorial and odd Factorial
//of given number
//inpute : 5
//output : -7 (8 - 15)
//input :-5
///output : -7 (8 - 15)
//input :10
///output : 2895 (3840 - 945)

#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0 , EvenFactorial = 1, oddFactorial = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt%2==0)
        {
            EvenFactorial *= iCnt;
        }else
        {
            oddFactorial *= iCnt;
        }
    }
    return EvenFactorial - oddFactorial;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Dactorial difference is %d",iRet);

    return 0;
}