//  4 . write a program which accept N from user and print all odd numbers up to N
//input : 18 
//output :  1 3 5 7 9 11 13 

#include<stdio.h>

void OddDisplya(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt%2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
     
     printf("enter number");
     scanf("%d",&iValue);

     OddDisplya(iValue);

     return 0;
}