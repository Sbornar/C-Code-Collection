// 1 > write a program which accept string from user and 
// copy the contents of that string into another string
//(implement strcpy() function)
//input : "Marvellous Multi OS"
//ouput : "Marvellous Multi OS"  in another string
//
//
#include<stdio.h>

void StrCpy(char *src , char *dest)
{
    
    if (*src != '\0')
    {
        printf("string is empy..");
        
    }
    

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    

}
int main()
{
   char Arr[20];
   char Brr[20];

   printf("Enter string..:");
   scanf("%[^'\n']s",Arr);

   StrCpy(Arr , Brr);
   
   printf("in another string :%s",Brr);
   

    return 0;
}