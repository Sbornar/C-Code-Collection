// 1 > accept N Number from user and return frequency of even
//    numbers.
//  input : N : 6
//   Element : 85 66 3 80 93 88
//output : 3

#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[] , int iLength)
{
    int iFrequency = 0 , iCnt =0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}


int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter numbe of element you want:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("unable to assign memory..");
        return -1;
    }

    printf("Enter %d element :",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    iRet = CountEven(p , iSize);

    printf("Result is %d",iRet);

    free(p);
    return 0;
}