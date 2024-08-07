// 5 > write a program which 2 string from user and concat second string
//    after first string (implement strcat() funaction)
//input : "Marvellous Infosystems"
//         "Logic Building"
//output : "Marvellous infosystem Logic Building"
//
//

#include<stdio.h>

void StrCatX(char *src , char *dest)
{
    char *cStart = NULL, *cEnd= NULL;
    int iLength = 0;
    
    while (*src != '\0')
    {
        src++;
    }
     
    while (*dest !='\0')
    {
        *src = *dest;
        dest++;
        src++;
    }
    *src = '\0';
    

    
}
int main()
{
   char Arr[50]= "MArvellous Infosystems";
   char Brr[30]="Logic Building";
   
    StrCatX(Arr , Brr);

    printf("%s",Arr);

    return 0;
}

