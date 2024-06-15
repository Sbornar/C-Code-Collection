// 2 : accept single digit number from user and print it iinto word
//
//input : 9
//output : nine
//input : -3
//output : Three
//input : 12
// output : invalid number

#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    switch (iNo)
    {
    case 0:
          printf("Zero");
         break;   
    case 1:
          printf("One");
         break;
    case 2:
         printf("Two");
         break; 
    case 3:
          printf("Three");
         break;
    case 4:
          printf("Four");
         break;             
    case 5:
          printf("Five");
         break;
    case 6:
          printf("Six");     
         break; 
    case 7:
          printf("Seven");
         break;
    case 8:
          printf("Eight");
         break;
    case 9:
          printf("Nine");
         break;                   
    default:
         printf("invalid number");
        break;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}