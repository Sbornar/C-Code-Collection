// 2 : write a recursive program which display below pattern

// output : 1 2 3 4 5

#include<stdio.h>


void Display()
{
    static int iNo = 1;

    if(iNo <= 5)
    {
        printf("%d\t",iNo);
        iNo++;
        Display();
    }

}
int main()
{
    Display();

    return 0;
}