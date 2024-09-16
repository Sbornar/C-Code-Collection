// 5 ; write generic program to accept N value from user and return
// smallest value





#include<stdio.h>

template <class T>

T Min(T *arr,int iSize)
{
    T iMin = *arr;

    for(int i=0;i<iSize;i++)
    {
        if(iMin > (*arr))
        {
            iMin = *arr;
        }
        arr++;
    }
    return iMin;


}
int main()
{  
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(arr , 5);

    printf("%d\n",iRet);

    float fRet = Min(brr ,4);

    printf("%f",fRet);





    return 0;
}
