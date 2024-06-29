// 1 > accept number of rows and number of columns from user and display
//    below pattern
//  input : iRow = 4   iCol = 4
//  output : 2  4  6  8  10
//           1  3  5  7  9
//           2  4  6  8  10
//           1  3  5  7  9


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int iNumber = 0;
    int iCnt1 = 0 , iCnt2 = 0;
    for(iCnt1= 1; iCnt1 <= iRow  ; iCnt1++)
    {
        if(iCnt1%2!=0)
        {
            iNumber = 2;
        }
        else
        {
            iNumber = 1;
        }
        for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++,iNumber += 2)
        {
            printf("%d\t",iNumber);
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