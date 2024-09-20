// 1 : write a program which accept matrix from user and return
//   addition of diagonal elements
//   intput : 3 2 5 9
//            4 3 2 2
//            8 4 1 5
//            3 9 7 5
//   output : 12

  #include<stdio.h>


int AddDiagonal(int Arr[4][4] , int iRow , int iCol)
{
    int iSum = 0;
    
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
            if(i == j)
            {
                iSum += Arr[i][j];
            }


        }
    }

    return iSum;
}
  int main()
  {
    int iRow = 4,iCol =4 , iRet =0;
    int Arr[iRow][iCol];

   
     iRet = AddDiagonal( Arr , iRow ,iCol);

     printf("Addition of %d",iRet);
     return 0;
  }         