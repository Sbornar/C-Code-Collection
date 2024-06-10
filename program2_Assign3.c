//2 . erite a program which accept number from user and print even factors of that number
//
//input 24
//output 1 2 4 6  8 24
//
#include<stdio.h>
void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i =1 ; i <= iNo/2 ; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
   int iValue = 0;
   printf("entre number\n");
   scanf("%d",&iValue);

   DisplayFactor(iValue);

   return 0;
}