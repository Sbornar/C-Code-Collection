// 5: write a recursive program which accpet number from user
// and return its reverse number

// input = 523
// output = 325

#include<stdio.h>

int Reverse(int iNo)
{
    static int iValue = 0;

    if(iNo != 0)
    {
       // iValue = iNo % 10;
         iNo = iNo /10;
        iValue =  Reverse(iNo);   
    }
    return iValue;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("%d",iRet);

    return 0;
}