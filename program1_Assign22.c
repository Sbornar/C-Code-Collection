// 1 > Accept N number from user and return the largest number
//  input : N : 6
//        element : 85 66 3 66 93 88
// output : 93


#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[] , int iLength)
{
    int iCnt = 0,iMax = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(p , iSize);

    printf("largest number is :%d",iRet);

    free(p);
    return 0;

}