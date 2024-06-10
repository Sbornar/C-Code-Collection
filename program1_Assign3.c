// 1 . write a program which accept ine number from user and print that number of even number in screen

#include<stdio.h>
void printEven(int iNo)
{
   if(iNo <= 0)
   {
    return;
   }
    
    int iCnt = 0, iCount = iNo * 2;

    for(iCnt =1 ; iCnt <= iCount ; iCnt++)
    {
        if(iCnt % 2 ==0)
        {
            printf("%d\t",iCnt);
        }
    }


}
int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);

    printEven(iValue);
    return 0;
}