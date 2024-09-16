// 3 : write a generic program to accept N value from user Addition
// and return Addition of that values

#include<stdio.h>


template<class T>

T addN(T *arr , int iSize)
{
   T Sum=0;

   int i = 0;
    
   for(i = 0;i < iSize;i++)
   {
      Sum = Sum + (*arr);

     
      arr++;
    
   }

   return Sum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    
    int  iSum = addN(Arr,5);
    
    printf("%d\n",iSum);
    float fSum = addN(brr ,4);

    printf("%f",fSum);

    return 0;

}