// 1: write generic program which accept one value and one number from user
// print that value that number of times on screen

// input : M  7
// output : M M M M M M M
// input : 11 3
// output : 11 11 11
// input : 3.7  6
// output : 3.7 3.7 3.7 3.7 3.7 3.7

#include<stdio.h>
#include<iostream>

using namespace std;

template <class T>

void Display(T Value , int iSize)
{
    int i=0;

    for(i=0;i < iSize;i++)
    {
        cout<<" "<<Value;
    }
    cout<<endl;
}
int main()
{
    Display('M' , 7);
    Display(11 , 3);
    Display(3.7 , 6);

    return 0;

}
