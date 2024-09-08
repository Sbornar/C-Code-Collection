// 4 : write a recursive program which accept number from  user
// and return smallest digits

// input= 87963

// output = 3

#include<stdio.h>

int Min(int iNo)
{
    static int imin =0;
    static int iValue = 1;
    int iDigit = 0;

    if(iValue == 1)
    {
        imin = iNo % 10;
        iValue = 0;
    }

    if(iNo != 0)
    {
       iDigit = iNo % 10;

       if(iDigit <= imin)
       {
          imin = iDigit;

       }
       iNo = iNo /10;
       Min(iNo);
    }

    return imin;


}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("%d",iRet);

    return 0 ;
}