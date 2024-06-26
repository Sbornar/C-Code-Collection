// 1 > accept numbeer of rows and number of columns from user
//     display below pattern
//input : iRow = 3  iCol = 4
//output :   *  #  *  #
//           *  #  *  #
//           *  #  *  #


#include<stdio.h>

void Pattern(int iRow , int iCol)
{   
    int iCnt1= 0 , iCnt2 = 0;
    for(iCnt1 = 1 ; iCnt1 <=iRow ; iCnt1++)
    {
        for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++)
        {
            printf("%d\t",iCnt1);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 =0 , iValue2 = 0;

    printf("enter number of rows and colums");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1 , iValue2);

    return 0;
}