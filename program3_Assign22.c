//  3 > accpet N number from user and return the difference
//    between largest and smallest number
//  input : N : 6
//  elements : 85 66 3 66 93 88
//output : 90  (93 - 3)
//

#include<stdio.h>
#include<stdlib.h>


int  Difference(int Arr[] , int iLength)
{
    int iCnt = 0,ismall = Arr[iCnt], iMax = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] < ismall)
        {
            ismall = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax - ismall;
}
int main()
{
   int iSize = 0,iCnt = 0 , iRet = 0;
    int *p = NULL;

    printf("Enter how may element you want to enter:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    

    if(p == NULL)
    {
        printf(" unable to allocat memeory.\n");
        return -1;
    }
    printf("Entre %d element in :",iSize);
    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p , iSize);

    printf(" Difference of smallest and largest number is :%d",iRet);

    free(p);
    return 0;

}