// 1 > accept number of rows and number of columns from user and display
//    below pattern
//  input : iRow = 4   iCol = 4
//  output : A  B  C  D
//           A  B  C  D
//           A  B  C  D 
//           A  B  C  D


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int iCnt1 = 0 , iCnt2 = 0;
    for(iCnt1=  1 ; iCnt1 <= iRow ; iCnt1++)
    {
        char cValue = 'A';
        for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++ , cValue++)
        {
            printf("%c\t",cValue);
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