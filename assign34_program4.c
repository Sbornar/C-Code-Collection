// 4: write a recursive program which display below pattern
// input : 6

// output : A B C D E F

#include<stdio.h>

void display(int iNo)
{
    
    static char cValue = 'A';
    if(iNo >= 1)
    {
        printf("%c\t",cValue);
        iNo = iNo -1;
        cValue++;
        
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