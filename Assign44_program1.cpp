// 1 : write generic program to multiply two numbers

#include<stdio.h>
template<class T>
T multiply(T No1,T No2)
{
    T ans;
    ans = No1 * No2;

    return ans;
}
int main(){

    int iRet  = multiply(10 ,20);
    printf("%d\t", iRet);

    float fRet = multiply(10.0f,20.0f);

    printf("%f",fRet);

    return 0;
}








