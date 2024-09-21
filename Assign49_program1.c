// 1: write a program which accept matrix from user and display
// transpose of the matrix
// the transpose of a given matrix is fromed by interchanging the 
// rows and column of a matrix

// input : 3 2 5 9 
//         4 3 2 2
//         8 4 1 5
//         3 9 7 5
//  output :3 4 8 3 
//          2 3 4 9
//          5 2 1 7
//          9 2 5 5

#include<stdio.h>


void  Transpose(int Arr[4][4] , int iRow , int iCol)
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

     printf("befor swaping............\n");
    for(int i=0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j< iCol ; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }

    
    for(int i=0 ; i < iRow ; i++)
    {
        for(int j = i ; j< iCol ; j++)
        {
            
           temp = Arr[i][j];
           Arr[i][j] = Arr[j][i];
            Arr[j][i] = temp; 
        
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

     
     Transpose( Arr , iRow ,iCol);

     return 0;
  }         