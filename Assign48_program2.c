// 2 : write a program which accept matrix and one number from user and
// return frequency of tha number

// number : 9
// input : 3 2 5 9
//         4 3 2 2
//         8 4 1 9
//         3 9 7 5
// output : 3      

 #include<stdio.h>


int  Frequency(int Arr[4][4] , int iRow , int iCol, int iValue)
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
            if(Arr[i][j] == iValue)
            {
                iSum++;
            }


        }
    }

    return iSum;
}
  int main()
  {
    int iRow = 4,iCol =4 , iRet =0,iValue =0;
    int Arr[iRow][iCol];

      printf("enter number for frequency    ;");
      scanf("%d",&iValue);
     iRet =Frequency( Arr , iRow ,iCol ,iValue);

     printf("Frequency of %d",iRet);
     return 0;
  }         