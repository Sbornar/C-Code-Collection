// 5 : write a program which accept matrix and check whether the matrix is 
// sparse matrix or not
// sparse matrix is a matrix with the majority of its elements equal to zero
// input : 1 0 3 0
//         0 6 0 0
//         0 0 1 0
//         9 0 0 9
//  output : true  

#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;


BOOL  Chksparse(int Arr[4][4] , int iRow , int iCol)
{
    
   BOOL bValue = true;
   int iCountN = 0, iCountZero=0;
    
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
            if( Arr[i][j] != 0)
            {
                iCountN++;
            }else
            {
                iCountZero++;
            }
        }
    }

    if(iCountN >iCountZero)
    {
        return false;
    }
    
   return bValue;

    
}
  int main()
  {
    int iRow = 4,iCol =4;
    int Arr[iRow][iCol];
    BOOL bRet = true;

     
     bRet = Chksparse( Arr , iRow ,iCol);

     if(bRet == true)
     {
        printf("sparse MATRIX : TRUE");
     }
     else
     {
         printf("ITS NOT sparse MATRIX : FALSE");
     }

     return 0;
  }         