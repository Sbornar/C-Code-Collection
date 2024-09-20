// 4 : write a program wjoch accept matrix and display addition of element from each
// column
// input:    3 2 5 9
//        4 3 2 2
//        8 4 1 9
//        3 9 7 5

// output: 18 18 15 25

#include<stdio.h>


void  AddColumn(int Arr[4][4] , int iRow , int iCol)
{
    
   int iSum =0;
    
     printf("Enter element in matrix");
    for(int i=0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j< iCol ; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    
    for(int j=0 ; j < iCol ; j++)
    {
        for(int i = 0 ; i< iRow ; i++)
        {
            iSum = iSum + Arr[i][j];


        }

        printf("%d\t", iSum);
        iSum = 0;
    }

    
}
  int main()
  {
    int iRow = 4,iCol =4;
    int Arr[iRow][iCol];

     
     AddColumn( Arr , iRow ,iCol);

     return 0;
  }         