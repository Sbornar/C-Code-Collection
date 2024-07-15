// 3 > Accept N number from user and accept one another number
//     as No return index of last occurrence of that No
//input : n : 6
//    NO : 66
//    element : 85 66 3 66 93 88
//output : 3
//input : n : 6
//    NO : 93
//    element : 85 66 3 66 93 88
//output : 4
//


#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[] , int iLength , int iNO)
{
    

    int Frequency = 0 , iCnt =0 , iIndex = -1;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            iIndex = iCnt;
            
        }
        
    }
    return iIndex;
}


int main()
{
    int iSize = 0, iCnt = 0, iValue  = 0;
    int iRet = 0;
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
    
    iRet = LastOcc(p , iSize , iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("last occurrence of number is %d",iRet);
    }
   

    free(p);
    return 0;
}

