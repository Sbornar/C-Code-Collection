// 1 > Accept N number from user and accept one another number as
//     NO check whether NO is present or Not
// input : N : 6
//       No : 66
//      Element : 85 66 3 66 93 88
//output : TRUE
//input : N : 6
//       No : 12
//      Element : 85 66 3 66 93 88
//output : FALSE
// 


#include<stdio.h>
#include<stdlib.h>

#include<stdbool.h>

typedef int BOOL;

bool Frequency(int Arr[] , int iLength , int iNO)
{
    BOOL bflag = false;

    int Frequency = 0 , iCnt =0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            bflag = true;
        }
        
    }
    return bflag;
}


int main()
{
    int iSize = 0, iCnt = 0, iValue  = 0;
    BOOL bRet = false ;
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

    printf("Enter number which you want to search frequency:\n");
    scanf("%d",&iValue);
    
    bRet = Frequency(p , iSize , iValue);
    
    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
   

    free(p);
    return 0;
}
