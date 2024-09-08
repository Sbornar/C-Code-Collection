// 2 : write a recursive program which accept number from user
//   and return largest digits

//   input : 87983

//   output : 9

#include<stdio.h>

int Max(int iNo)
{
    static int iLargest = 0;
    int iDigit = 0;
    
    if(iNo != 0)
    {
     iDigit = iNo %10;

     if(iDigit >= iLargest)
     {
        iLargest = iDigit;
     }
     iNo = iNo /10;
     Max(iNo);
    }

    return iLargest;


    
}
int main()
{
    int  iValue = 0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet  = Max(iValue);
    printf("%d",iRet);

    return 0;
}

