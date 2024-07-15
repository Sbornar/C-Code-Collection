// 2 > Accept N number from user and accept one another number
//   as NO , return index of fist Occurrence of that NO
//input : N : 6
//     NO : 66
//      elements : 85 66 3 66 93 88
//output : 1
//input : N : 6
//     NO : 12
//      elements : 85 11 3 15 11 111
//output : -1


#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[] , int iLength , int iNO)
{
    

    int Frequency = 0 , iCnt =0 , iIndex = -1;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            iIndex = iCnt;
            break;
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
    
    iRet = FirstOcc(p , iSize , iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurrence of number is %d",iRet);
    }
   

    free(p);
    return 0;
}
