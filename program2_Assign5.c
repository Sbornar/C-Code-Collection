//  2 . write a program which accept number from user and print number till that number
// input : 8
//output : 1 2 3 4 5 6 7 8
//input : 5 
//output : 1 2 3 4 5


#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0 ;

   for(iCnt = 1 ; iCnt <= iNo ;iCnt++)
   {
      printf("%d\t",iCnt);
   }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}