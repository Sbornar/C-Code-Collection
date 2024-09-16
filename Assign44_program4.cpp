// 4 : write generic program to accept N value from user and return largest
// value

#include<stdio.h>

template <class T>

T Max(T *arr,int iSize)
{
    T iMax = 0;

    for(int i=0;i<iSize;i++)
    {
        if(iMax < (*arr))
        {
            iMax = *arr;
        }
        arr++;
    }
    return iMax;


}
int main()
{  
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Max(arr , 5);

    printf("%d\n",iRet);

    float fRet = Max(brr ,4);

    printf("%f",fRet);





    return 0;
}
