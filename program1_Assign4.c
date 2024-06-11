// 1. write a progam which accept number from user and display its multiplication of factors.

// inpute : 12 
// outpute :144  (1 * 2 * 3 * 4 * 6)
//
// inpute :13
// outpute :1   (1)

// inpute :10
// output : 10 (1*2*5)

#include<stdio.h>

int MultFact(int iNo)
{
   int iCnt = 0 , iMult = 1;

   for(iCnt =1 ;iCnt <= iNo/2 ;iCnt++)
   {
      if((iNo%iCnt) == 0)
      {
        iMult = iMult * iCnt;
      }
   }
   return iMult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}