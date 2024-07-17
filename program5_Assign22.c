// 5 > Accept N Number from user and display summation of
//    digit of each number
//input : N : 6
//   elmenet  : 8225 665 3 76 953 858
//ouput   : 17 17 3 13 17 21


#include<stdio.h>
#include<stdlib.h>


void DigitsSum(int Arr[] , int iLength)
{
    int iCnt = 0, iDigit = 0 , getNumber = 0  ;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        int iCountSum = 0;
         getNumber = Arr[iCnt];
        while (getNumber != 0)
        {
               iDigit = getNumber%10;
               iCountSum = iCountSum + iDigit;
               getNumber = getNumber/ 10;

        }
        
            printf("%d\t",iCountSum);
        

    }
    
}
int main()
{
   int iSize = 0,iCnt = 0;
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

     DigitsSum(p , iSize);

   

    free(p);
    return 0;

}
