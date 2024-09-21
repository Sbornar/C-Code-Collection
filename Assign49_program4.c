// 4: write a program which accept matrix and check whether the matrix is identity
// matrix or not
// identity matrix is a square matrix whith 1's along the diagonal from upper left
// to lower right and 0's in all other positions 
// if it satisfies the structure as ecplained befor the matrix is called as identity matrix

// input : 1 0 0 0
//         0 1 0 0
//         0 0 1 0
//         0 0 0 1
// output : true
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;


BOOL  ChkIdentity(int Arr[4][4] , int iRow , int iCol)
{
    
   BOOL bValue = true;
    
     printf("Enter element in matrix");
    for(int i=0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j< iCol ; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

     for(int i=0 ; i < iRow ; i++)
    {
        for(int j = 0 ; j< iCol ; j++)
        {
            if( (i != j) && (Arr[i][j] != 0))
            {
                return false;
            }
        }
    }
     for(int i=0 ; i < iRow ; i++)
    {
        for(int j = i ; j< iCol ; j++)
        {
            if( (i == j) && (Arr[i][j] != 1))
            {
                return false;
            }
        }
    }
   return bValue;

    
}
  int main()
  {
    int iRow = 4,iCol =4;
    int Arr[iRow][iCol];
    BOOL bRet = true;

     
     bRet = ChkIdentity( Arr , iRow ,iCol);

     if(bRet == true)
     {
        printf("IDENTITY MATRIX : TRUE");
     }
     else
     {
         printf("ITS NOT IDENTITY MATRIX : FALSE");
     }

     return 0;
  }         