// 4 : write a program to find odd factorial of given number
// input : 5
//output : 15 (5 * 3 * 1)
//intput : -5
//output : 15 (5 * 3 * 1)
//intput : 10
//output : 945 (9 * 7 * 5 * 3 * 1)

#include<stdio.h>
int  oddFactorial(int iNo)
{
    int iCnt = 0 , oddTotal= 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
    {
       if(iCnt%2 != 0)
       {
         oddTotal *=iCnt;
       }
    }
    return oddTotal;

}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = oddFactorial(iValue);

    printf("odd factorial of number is %d",iRet);

    return 0;
}