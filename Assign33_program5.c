// 5: write a recursive program which display below pattern

// output : a b c d e f


#include<stdio.h>

void Display()
{
    static int iNo = 1;
    static char cValue = 'a';

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