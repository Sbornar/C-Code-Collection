// 5 > write a program which accept string from user and
//  displya it in reverse order
//input : "MarvellouS"
//ouput : SuollevraM
//

#include<stdio.h>

void Reverse(char *str)
{
    int iLength = 0 ;
    char  *cStart = NULL,*cEnd = NULL,ctemp = '\0';
    cStart = str;

    while (*str != 0)
    {
        iLength++;
        str++;
    }

    cEnd = str + iLength-1;

    while (cStart < cEnd)
    {
         ctemp = *cStart;
         *cStart = *cEnd;
         *cEnd = ctemp;
         cStart++;
         cEnd--;
    }
    
    
   printf("%s",str);
   
    
    
    
}
int main()
{
    char Arr[20];
    

    printf("Enter string..");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

     
     


    return 0;
}