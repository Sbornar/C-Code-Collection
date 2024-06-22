// 5 > accept numbeer from user and displya below pattern
//input : 8
//output : 2 4 6 8 10 1 2 14 16

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2 ; iCnt <= iNo*2 ; iCnt += 2)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0 ;

    printf("Entre number  of element");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}