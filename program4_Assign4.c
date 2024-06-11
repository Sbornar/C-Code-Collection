// 4. write a program with accept number from user and return summation of all its non factor
//
//input : 12
//output : 50
//input : 10
//output : 37

#include<stdio.h>

int SumNonFact(int iNo)
{
     int iCnt = 0 ,iSumOFFactor = 0 ;

     for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
     {
        if(iNo%iCnt != 0)
        {
           iSumOFFactor = iSumOFFactor + iCnt;
        }
     }
     return iSumOFFactor;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}