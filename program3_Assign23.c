// 3 > Accept character from user and check whether it is
//   digit or not  ( 0 - 9)
//  input : 7
//  output : TRUE
//   input : d
//   output : FALSE


#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNumber(int iNo)
{
    if(iNo >= 0 && iNo <= 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
   int iValue = 0;

   BOOL bRet = FALSE;

   printf("Enter number");
   scanf("%d",&iValue);

   bRet = CheckNumber(iValue);

   if(bRet == TRUE)
   {
      printf("TRUE");
   }
   else
   {
    printf("FALSE");
   }

    return 0;
}
