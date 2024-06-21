// 5 > write a progarm which accept number from user and return difference
//       between summation of even digit and summation of add digits
//input : 2395
//output -15 (2 - 17)
//input : 1018
//output : 6 (8 - 2)
// input : 8440
//output : 16 (16 - 0)
//input 5733
//output : -18 (0 - 18)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0 , ODDCount = 0 , EvenCount = 0;

    while (iNo!= 0)
    {
           iDigit = iNo%10;

           if(iDigit%2==0)
           {
             EvenCount += iDigit;
           }else
           {
              ODDCount += iDigit;
           }

           iNo = iNo / 10;
    }
     return EvenCount - ODDCount;
    
    
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}
