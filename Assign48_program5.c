// 5 : write a program which accept matrix and swap the contents of consecutive rows
// intput : 3 2 5 9 
//          4 3 2 2
//          8 4 1 9
//          3 9 7 5

//  output : 4 3 2 2
//           3 2 5 9 
//           3 9 7 5
//           8 4 1 9

#include<stdio.h>


void  AddColumn(int Arr[4][4] , int iRow , int iCol)
{
    
   int temp = 0;
    
     printf("Enter element in matrix");
    for(int i=0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j< iCol ; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    
    for(int i=0 ; i < iRow-1 ; i = i+2)
    {
        for(int j = 0 ; j< iCol ; j++)
        {
           temp = Arr[i][j];
           Arr[i][j] = Arr[i+1][j];
            Arr[i+1][j] = temp; 

        }

    }
     printf("After swaping............\n");
    for(int i=0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j< iCol ; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }

    
}
  int main()
  {
    int iRow = 4,iCol =4;
    int Arr[iRow][iCol];

     
     AddColumn( Arr , iRow ,iCol);

     return 0;
  }         