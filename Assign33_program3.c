// 3: write a recursive program which display below pattern

// output : 5 4 3 2 1 


#include<stdio.h>

void Display()
{
    static int iNo = 5;

    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
        Display();
    }
}
int main()
{
    Display();

    return 0;
}