// 3 : write a program which acept distance in kilometer and convert it into
//     meter (1 kilometer = 1000 meter)
//   input : 5
//   output : 5000
//    input : 12
//   output : 12000

#include<stdio.h>
int KMtoMeter(int iNo)
{
    return 1000 * iNo;
}
int main()
{
    int ivalue =0, iRet = 0;

    printf("Enter distance");
    scanf("%d",&ivalue);

    iRet = KMtoMeter(ivalue);

    printf("%d kilometer is %d meter",ivalue ,iRet);

    return 0;
}