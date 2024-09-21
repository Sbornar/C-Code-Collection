// 3: write a program which accept matrix and reverse the contents of
// each column
// input: 3 2 5 9 
//        4 3 2 2
//        8 4 1 9
//        3 9 7 5
// output : 3 9 7 5
//          8 4 1 9
//          4 3 2 2
//          3 2 5 9    

#include<stdio.h>


void   ReversCol(int Arr[4][4] , int iRow , int iCol)
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

    
    for(int j=0 ; j < iCol ; j++)
    {
        X = iRow-1;

        for(int i = 0  ; i< iRow/2 ; i++ , X--)
        {
            
           temp = Arr[i][j];
           Arr[i][j] = Arr[X][j];
            Arr[X][j] = temp; 
        
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

     
     ReversCol( Arr , iRow ,iCol);

     return 0;
  }         