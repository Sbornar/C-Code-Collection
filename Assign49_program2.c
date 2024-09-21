// 2 : write a program which accept matrix and reverse the contents of
// each row 
// input: 3 2 5 9 
//        4 3 2 2
//        8 4 1 9
//        3 9 7 5
//  output 9 5 2 3
//         2 2 3 4
//         9 1 4 8
//         5 7 9 3  

#include<stdio.h>


void  ReversRow(int Arr[4][4] , int iRow , int iCol)
{
    
   int temp = 0 , X = 0;
    
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
        X = iCol-1;

        for(int j = 0  ; j< iCol/2 ; j++ , X--)
        {
            
           temp = Arr[i][j];
           Arr[i][j] = Arr[i][X];
            Arr[i][X] = temp; 
        
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

     
     ReversRow( Arr , iRow ,iCol);

     return 0;
  }         