//  3 > accept N Number user check whether that number
//    contains 11 in it or not
// input : N : 6
//    element : 85 66 11 80 93 88
//output : 11 is present
//input : N : 6
//    element : 85 66 3 80 93 88
//output : 11 is  absent
//




#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool Check(int Arr[] , int iLength)
{
    int iCnt =0;


    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11 )
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = 0;
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
    
    bRet = Check(p , iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);
    return 0;
}