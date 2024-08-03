// 5 > write a program which accept string from user reverse that
//  string  in place
//  input : abcd
//  output : dcba
//  input : abba
//  output : abba
//

#include<stdio.h>

void StrRevX(char *str)
 {
     char *cStart= NULL  , *cEnd=NULL ,temp = 0;
     int iLength = 0;
    
     while (*(str + iLength) != '\0' && *(str + iLength) != '\n')
     {
         iLength++;
         
     }
     cStart = str;
     cEnd = (str + iLength - 1);

     while (cStart < cEnd)
     {
           temp = *cStart;
          *cStart = *cEnd;
          *cEnd = temp;


         cStart++;
         cEnd--;
  }
  
    
   
 }

int main()
{
    char Arr[20];

    printf("Enter string...");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Reveres string are : %s",Arr);

    return 0;
}