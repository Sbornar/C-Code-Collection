// 5": write generic program to accept N value and reverse the contents
// input: 10 20 30 10 30 40 10 40 10
// output: 10 40 10 40 30 10 30 20 10

#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>

void Reverse(T *arr ,int iSize)
{
    int last = iSize;
    int temp = 0;

 
   


    for(int i= 1; i > (iSize) % 2;i++, last--)
    {
          temp = arr[i];
          arr[i] = arr[last-1];
          arr[last-1] = temp;
    }
   

}
int main()
{
    int arr[] ={10 ,20, 30, 10,30 ,40, 10,40 ,10 };

    for(int i= 0; i<9;i++)
    {
        cout<<" "<<arr[i];
    }

    Reverse(arr  ,9);

    cout<<endl;

    for(int i= 0; i<9;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}