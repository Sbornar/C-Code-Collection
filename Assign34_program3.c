// 2 : write a recursive program which display below pattern
// input : 5

// output : 5 4 3 2 1

#include<stdio.h>

void display(int iNo)
{
    static int iValue = 5;
    if(iNo >= 1)
    {
        printf("%d\t",iValue);
        iNo = iNo -1;
        iValue--;
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