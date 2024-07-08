// 4 > Accept N NUmber from user and return frequency of 11 from it
//input : N : 6
//    element : 85 66 3 15 93 88
//output : 0
//input : N : 6
//   element : 85 11 3 15 11 111
//output :2

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[] , int iLength)
{
    int Frequency = 0 , iCnt =0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            Frequency++;
        }
        
    }
    return Frequency;
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