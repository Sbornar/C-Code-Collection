// 3: write generic program to accept N values and search first occurrence of any
// specific value
// input: 10 20 30 10 30 40 10 40 10
// value to search 40
// output : 6

#include<stdio.h>

template <class T>
int searchFirst(T *arr ,int iSize,T iNo)
{
    int Result = 0;
    int iNO = 0;

    for(int i =0; i<iSize;i++)
    {
        if((*arr == iNo) && (iNO == 0))
        {
              Result = i + 1;
              iNO = 1;
        }
        arr++;
    }
    return Result;
}
int main()
{
    int arr[]={10,20, 30, 10,30,40,10,40,10};
    int iRet = searchFirst(arr,9,40);
    printf("%d",iRet);

    return 0;
}