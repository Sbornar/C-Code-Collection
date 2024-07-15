// 4 > Accept N number from user and accept Range, Display all
//   elements from that range
// input : N : 6
//      Start : 60   
//      end : 90
//      Elements : 85 66 3 76 93 88
//output : 66 76 88
//input : N : 6
//      Start : 30   
//      end : 50
//      Elements : 85 66 3 76 93 88
//output : 

#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[] , int iLength , int Start,int End)
{
    

    int Frequency = 0 , iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] >= Start && Arr[iCnt] <= End)
        {
             
            printf("%d\t",Arr[iCnt]);
        }
        
    }
    
}


int main()
{
    int iSize = 0, iCnt = 0, iValue1  = 0,iValue2 = 0;
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

    printf("Enter the Start Value of range:\n");
    scanf("%d",&iValue1);
    printf("Enter the end value of range.\n");
    scanf("%d",&iValue2);
    
    Range(p , iSize , iValue1 ,iValue2);
   

    free(p);
    return 0;
}

