// 3 : write a program which accept matrix and return largest number from
// both the diagonals

// input :3 2 5 9
//        4 3 2 2
//        8 4 1 9
//        3 9 7 5
// output : 9

#include<stdio.h>


int  LargestElement(int Arr[4][4] , int iRow , int iCol)
{
    
    int Large = Arr[0][0];
    
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
            if(Arr[i][j] > Large)
            {
                Large = Arr[i][j];
            }


        }
    }

    return Large;
}
  int main()
  {
    int iRow = 4,iCol =4, iRet = 0;
    int Arr[iRow][iCol];

     
     iRet =LargestElement( Arr , iRow ,iCol);

     printf("LargestElement of %d",iRet);
     return 0;
  }         