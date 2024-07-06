// 1 > accept N number from user and return difference between summation
//     of even elements and summation of odd elements
//intput :   N:  6
//           Elements : 85 66 3 80 93 88
//output : 53  (234 -181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[] , int iLength)
{
    int ODDsum = 0, Evensum = 0 , iCnt = 0;

    for(iCnt = 0 ;iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            Evensum = Evensum + Arr[iCnt];
        }
        else
        {
            ODDsum = ODDsum + Arr[iCnt];
        }
    }

   return Evensum-ODDsum;
    

}
int main()
{
   int iSize = 0,iRet = 0, iCnt = 0;
   int *p = NULL;
   
   printf("Enter number of element :\t");
   scanf("%d",&iSize);

   p = (int *)malloc(iSize * sizeof(int));

   if(p == NULL)
   {
    printf("Unable to allocate memory\n");
    return -1;
   }

   printf("Enter %d element \n ",iSize);

   for(iCnt = 0 ;iCnt < iSize ; iCnt++)
   {
     printf("Ente element : %d\t",iCnt+1);
     scanf("%d",&p[iCnt]);
   }

   iRet = Difference(p , iSize);

   printf("Result is %d",iRet);
   
   return 0;
}