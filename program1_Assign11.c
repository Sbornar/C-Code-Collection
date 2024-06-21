// 1 > write a program wich accept number from user and return the count of even digits
// input : 2395
// output : 1
// input : 1018
// output : 2
//input :-1018
// output : 2
//input : 8462
//output : 4

#include<stdio.h>
int CountEven(int iNo)
{
    int Digit = 0 , Count = 0;
    
    while(iNo!=0)
    {
        Digit = iNo%10;
        if(Digit % 2 == 0)
        {
           Count++;
        }
        iNo = iNo/10;
    }
    return Count;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}
