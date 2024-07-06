// 2> Accept N number from user and display all such elements which are
//   divisible by 5
// input N : 6
//     element : 85 66 3 80 93 88
// output : 85 80


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]%5==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
   
   int iSize = 0, iCnt = 0, iRet = 0;
   int *p = NULL;

    printf("Emter number of element:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d element:\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter %d element:\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

     Display(p , iSize);
     free(p);

     return 0;

}