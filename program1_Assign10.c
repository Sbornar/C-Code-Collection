// 1 > write a program which accept number from user and display its digits in reverse
//     order
//input : 2395
// output : 5
///         9
//          3
//          2    
//input : 1018
//output : 8
//         1 
//         0
//         1
//input  : -1018
//output  : 8
//          1 
//          0
//          1
//input :   9000
//output :  0
//           0
//           0
//           9


#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}