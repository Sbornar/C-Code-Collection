// 2 : write a recursive program which display below pattern
// input : 5

// output : 1 2 3 4 5

#include<stdio.h>

void display(int iNo)
{
    static int iValue = 1;
    if(iNo >= 1)
    {
        printf("%d\t",iValue);
        iNo = iNo -1;
        iValue++;
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