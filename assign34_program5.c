// 5: write a recursive program which display below pattern
// input : 6

// output : a b c d e f

#include<stdio.h>

void display(int iNo)
{
    
    static char cValue = 'a';
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