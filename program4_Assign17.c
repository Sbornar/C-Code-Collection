// 1 > accept number of rows and number of columns from user and display
//    below pattern
//  input : iRow = 6  iCol = 6
//  output :   *  *  *  *  *  *
            // *  *           *
            // *     *        *
            // *        *     *
            // *           *  *
            // *  *  *  *  *  *
       
 #include<stdio.h>

void Pattern(int iRow , int iCol)
{
    
    int iCnt1 = 0 , iCnt2 = 0;

    if(iRow != iCol)
    {
        printf("Row and Colum are not same..");
        return;
    }
    
    for(iCnt1= 1; iCnt1 <= iRow ; iCnt1++)
    {
        
       for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++)
          {
             
                if(iCnt1 == iCnt2 || iCnt1 == 1 || iCnt1 == 6 || iCnt2 == 1 || iCnt2 == 6)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
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