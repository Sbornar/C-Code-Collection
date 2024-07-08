// 5 > Accept N NUmber from user and accept one another 
//     number as NO return frequency of NO from it
//input : N : 6
//        NO  : 66 
//   element : 85 66 3 66 93 88
//output : 2
//input : N : 6
//        NO  : 12 
//   element : 85 66 3 66 93 88
//output : 0
//
//

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iLength , int iNO)
{
    int Frequency = 0 , iCnt =0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            Frequency++;
        }
        
    }
    return Frequency;
}


int main()
{
    int iSize = 0, iCnt = 0, iRet = 0 , iValue  = 0;
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
    
    iRet = Frequency(p , iSize , iValue);

    printf("Result is %d",iRet);

    free(p);
    return 0;
}
