// 2 ; write generic program to accept N values and count frequency
// of any specific value
// input: 10 20 30 10 30 40 10 40 10
// frequency : 10
// output : 4

#include<stdio.h>

template <class T>
int frequency(T *arr ,int iSize,T iNo)
{
    int result = 0;

    for(int i=0;i<iSize;i++)
    {
        if(*arr == iNo)
        {
            result++;
        }
        arr++;
    }
    return result;
}
int main()
{
    int arr[]={10,20, 30, 10,30,40,10,40,10};
    int iRet =  frequency(arr,9,10);
    printf("%d",iRet);

    return 0;
}