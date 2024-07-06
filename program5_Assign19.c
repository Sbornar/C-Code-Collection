//  5 > accept N number from user and display all such element 
//      which are multiples of 11
//  intput : N  :  6
//        element : 85 66 3 55 93 88
//output : 66 55 88



#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[] , int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]%11==0)
        {
            printf("%d \t",Arr[iCnt]);
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