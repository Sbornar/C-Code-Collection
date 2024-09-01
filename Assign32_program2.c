// 2: write a program which accept string from user and print below
// pattern

// input : "Marvellous"
// output : M a r v e l l o u s
//          M a r v e l l o u 
//          M a r v e l l o 
//          M a r v e l l 
//          M a r v e l 
//          M a r v e 
//          M a r v 
//          M a r 
//          M a 
//          M 

#include<stdio.h>

void pattern(char *str)
{
    int iLength = 0,iCnt=1;
    int iCount = 0;
    char *dest = NULL, *src = NULL;
    src = str;
    dest = str;

    while(*src != '\0')
    {
        iLength++;
        src++;

    }
     
    while(iLength >= 1)
    {
        iCount = iLength;
        while((*str != '\0') && (iCount >= iCnt))
        {
            printf("%c\t",*str);
            str++;
            iCnt++;
        }
        printf("\n");
        str = dest;
        iCount--;
        iCnt=1;
        iLength--;
    }
}

int main()
{
   char arr[30]="Marvellous";

   pattern(arr);


    return 0;
}