// 5 : write a program which accept number from user and display its table in reverse
//input : 2
//output : 20 18 16 14 12 10 8 6 4 2
#include<stdio.h>
void TableRev(int iNo)
{
    int iCnt = 10;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iCnt !=0)
    {
        printf("%d\t",iCnt*iNo);
        iCnt--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}