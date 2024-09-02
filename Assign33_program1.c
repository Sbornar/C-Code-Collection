// 1 : write a recursive program which display below pattern

// output : * * * * *

#include<stdio.h>


void Display()
{
    
    static int ino = 1;
    
    if(ino <= 5)
    {
         printf("*\t");
         ino++;
         Display();
    }


}

int main()
{
    Display();

    return 0;
}