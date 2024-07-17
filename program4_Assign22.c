//  4 > Accept N number from user and displya all such numbers
//   which contain 3 digit in it
//input : N : 6
//   elements : 8225 665 3 953 858
//output 665 953 858



#include<stdio.h>
#include<stdlib.h>


void Digits(int Arr[] , int iLength)
{
    int iCnt = 0, iDigit = 0 , getNumber = 0  ;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        int iCount = 0;
         getNumber = Arr[iCnt];
        while (getNumber != 0)
        {
               
               iCount++;
               getNumber = getNumber/ 10;

        }
        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }

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

     Digits(p , iSize);

   

    free(p);
    return 0;

}