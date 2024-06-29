// 1 > accept number of rows and number of columns from user and display
//    below pattern
//  input : iRow = 4   iCol = 4
//  output :  1  2  3  4  5  
//           -1 -2 -3 -4 -5
//            1  2  3  4  5  
//           -1 -2 -3 -4 -5

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int iCnt1 = 0 , iCnt2 = 0;
    for(iCnt1= 1; iCnt1 <= iRow  ; iCnt1++)
    {
        int iValue = -1,iValue1 = 1;
        
       for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++,iValue--,iValue1++)
          {
            
            if(iCnt1%2==0)
            {
                printf("%d\t",iValue);
            }
            else
            {
                printf("%d\t",iValue1);
            }
             
          }
            printf("\n");    
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0 ;
}