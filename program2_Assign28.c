// 2 > write a program which accept string from user and copy
//  the  contents of that string into another string (implement
 //     strncpy()  function  )
//input : marvellous multi OS
//        10
//output : marvellous
//note : if third parameter is greater than the size of
// source string then copy whole string into destination
//

#include<stdio.h>

void  StrNCpy(char *src , char *dest , int iNO)
{

    
    while ((*src != '\0') && (iNO != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iNO--;
    }
    *dest = '\0';
}
int main()
{
   char Arr[30];
   char Brr[30];

   printf("Enter string..");
   scanf("%[^'\n']s",Arr);
   
    StrNCpy(Arr , Brr , 10);

    printf("%s",Brr);

    return 0;
}

