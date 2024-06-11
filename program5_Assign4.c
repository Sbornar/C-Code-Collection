// 5 . write a program which accept number from user and return difference between summation of all its factors and non factors
//
//input 12
//output -34   (16(factor sum) -(50(non factor sum)))
//nput 10
//output -29   (8(factor sum) -(37(non factor sum)))
//

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt =0 , iFactSum =0 ,iNonFactSum = 0;

    for(iCnt =1 ; iCnt <= iNo ; iCnt ++)
    {
        if( iNo%iCnt == 0 && iNo != iCnt)
         {
            iFactSum = iFactSum + iCnt;
         }
         else if(iNo%iCnt != 0)
         {
            iNonFactSum = iNonFactSum + iCnt;
         }
    }
   
    return iFactSum - iNonFactSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}