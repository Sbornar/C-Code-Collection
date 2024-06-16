//
// 3 : write a program to find even factorial of given number
//input : 5
//output : 8  (4*2)
//input : -5
//output : 8  (4*2)
//input : 10
//output : 3840 (10 *8 * 6 * 4 * 2)

#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0, EvenSum = 1;
     
     if(iNo<0)
     {
        iNo = -iNo;
     }

    for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
    {
        if(iCnt%2==0)
        {
            EvenSum *= iCnt;
        }
    }
    return EvenSum;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    
    printf("Even factorial of number is %d",iRet);

    return 0;
}