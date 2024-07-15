// 5 > Accept N number from user and return product of all
//       ODD element
//input : N : 6
//      element : 15 66 3 70 10 88
//output 45
//input : N : 6
//      element : 44 66 72 70 10 88
//output 40
//
//
#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[] , int iLength )
{
    

    int Frequency = 0 , iCnt = 0 , iProduct = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt]%2)!=0)
        {
            iProduct = iProduct + Arr[iCnt];
        }
        
    }

    return iProduct;
    
}


int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter numbe of element you want\n:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("unable to assign memory..");
        return -1;
    }

    printf("Enter %d element :\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

   
    
    iRet = Product(p , iSize );
   
    printf("product od odd element is : %d",iRet);
    free(p);
    return 0;
}