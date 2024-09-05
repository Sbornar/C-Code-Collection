// 1 : write a recursive program which accept number from user and display
//    below pattern.

//    input : 5
//     output : 5  * 4 * 3 * 2 * 1 *

    #include<stdio.h>
    
    void Display(int iNo)
    {
      
      static int iValue  = 1;

      if(iNo >= 1)
      {
         
          printf("%d\t",iNo);
            printf("*\t");
          iNo = iNo -1;
           Display(iNo);

         
      }
    

    }
    int main()
    {
        int ivalue = 0;

        printf("Enter number");
        scanf("%d",&ivalue);

        Display(ivalue);

        return 0;
    }