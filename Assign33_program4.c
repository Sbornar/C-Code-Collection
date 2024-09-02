// 4: write a recursive program which display below pattern

// output : A B C D E F


#include<stdio.h>

void Display()
{
    static int iNo = 1;
    static char cValue = 'A';

    if(iNo <= 6)
    {
        printf("%c\t", cValue);
        iNo++;
        cValue++;
        Display();
    }
}
int main()
{
    Display();

    return 0;
}