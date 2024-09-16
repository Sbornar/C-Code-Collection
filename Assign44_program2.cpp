// 2 . write generic program to find largest number from three number

#include<stdio.h>

template <class T>

T Max(T iNo1, T iNo2 , T iNo3)
{
    T Result = iNo1;

    if( Result > iNo1)
    {
        Result = iNo1;
    }
    if(Result < iNo2)
    {
         Result= iNo2;
    }
    if(Result < iNo3)
    {
        Result = iNo3;
    }

    return Result;
}


int main()
{
    int iNo1 = 44,iNo2 = 89 ,iNo3 = 77;

    int iRet = Max(iNo1,iNo2,iNo3);

    printf("%d\t",iRet);

    return 0;
}