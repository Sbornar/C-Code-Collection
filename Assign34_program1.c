// 1 : write a recursive program which display below pattern
// input : 5

// output : * * * * *

#include<stdio.h>

void display(int iNo)
{
    if(iNo >= 1)
    {
        printf("*\t");
        iNo = iNo -1;
        display(iNo);
    }


}
int main()
{
    int iValue =0 ; 
    printf("Enter number");
    scanf("%d",&iValue);

    display(iValue);

    return 0;
}