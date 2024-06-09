// 4.accept tow number from user and display first number in second number of time
////  inoute 12 3
//  output   12 12 12
//

#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}