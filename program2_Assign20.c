// 2 > accept N number from user and return difference between 
//    frequency of even number and odd numbers
// input :  N : 7
//     element : 85 66 3 80 93 88 90
//output : 1 (4 - 3)


#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[] , int iLength)
{
    int EvenFrequency = 0 ,ODDFrequency = 0, iCnt =0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            EvenFrequency++;
        }
        else
        {
            ODDFrequency++;
        }
    }
    return EvenFrequency-ODDFrequency;
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
    
    iRet = Frequency(p , iSize);

    printf("Result is %d",iRet);

    free(p);
    return 0;
}