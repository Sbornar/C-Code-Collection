// 4 > Accept N number from user and display all such element which
//       are divisible by 3 and 5
// input : N : 6
//        elements : 85 66 3 15 93 88
//output : 15
//
//


#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[] , int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]%3==0  && Arr[iCnt]%5==0)
        {
            printf("%d",Arr[iCnt]);
        }
    }
}


int main()
{
   int iSize = 0, iCnt = 0; 
   int *p = NULL;

   printf("Enter number of element you want :\n");
   scanf("%d",&iSize);

   p = (int *)malloc(iSize * sizeof(int));
   
   if(p==NULL)
   {
       printf("unable to allocat memory...");
       return -1;
   }
   printf("enter %d element:",iSize);

   for(iCnt = 0 ; iCnt < iSize; iCnt++)
   {
       printf("Enter %d element :\t",iCnt+1);
       scanf("%d",&p[iCnt]);
   }

     Display(p , iSize);

     free(p);



    return 0;
}