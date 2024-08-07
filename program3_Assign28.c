// 3 > write a program which accept string from user and copy
//  capital characterof that string into another string
//input : "Marvellous Multi OS"
//output : MMOS


#include<stdio.h>

void StrCpyCap(char *src , char *dest)
{

    
    while ((*src != '\0'))
    {
        if((*src >= 'A') &&(*src <= 'Z'))
        {
             *dest = *src;
             dest++;
         }
        src++;
    
    
    }
    *dest = '\0';
}
int main()
{
   char Arr[30];
   char Brr[30];

   printf("Enter string..");
   scanf("%[^'\n']s",Arr);
   
    StrCpyCap(Arr , Brr);

    printf("%s",Brr);

    return 0;
}

