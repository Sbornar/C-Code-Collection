// 2 . writer a progarm which accept number from user and display its factors in decreasing order
//
//intput 12
//output : 6 4 3 2 1
//input :10
//output : 5 2 1

#include<stdio.h>

void FactRev(int iNo)
{
  
  int iCnt = 0;

  for(iCnt = (iNo/2) ; iCnt > 0 ; iCnt--)
  {
    if(iNo%iCnt == 0)
    {
      printf("%d\t",iCnt);
    }
  }

}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}