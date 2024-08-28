//  4 ; accept string from user and reverse the contents of string by toggling
//      the case

//      input : "aCBdef";
//      output : "FEDcbA"

#include<stdio.h>

void StrRevTogX(char *str)
{ 
    
    if(*str == '\0')
    {
        return;
    }

    char temp;
    char *first , *last;
    first = str;
    last = str;
     
     while(*last != '\0')
     {
        last++;
     }
     last--;

     while(first <= last)
     {
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
     }

    


}

int main()
{
   char arr[50] = "Marvellous";

   StrRevTogX(arr);

   printf("%s",arr); // SUOLLEVRAM

    return 0;

}