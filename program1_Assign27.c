// 1 > write a program which accept string from user and accept
// one character  . check whether that character is present
//   in string or not
//input : " Marvellous Multi OS"
 //         "e"
//output : TRUE
//input :" Marvellous Multi OS"
//          "W"
//output : FALSE


#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool CheckChar(char *str , char cValue)
{
    while (*str != '\0')
    {
        if(*str == cValue)
        {
            return 1;
        }
        str++;
    }
    return 0;
    
}

int main()
{
   
   char Arr[20] , ch='\0';
   bool bRet = false;
   
   printf("Enter string:\n");
   scanf("%[^'\n']s",Arr);
   
   printf("entre character which you want to find:\n");
   scanf(" %c",&ch);

   bRet = CheckChar(Arr , ch);

   if(bRet == true)
   {
     printf("True");
   }
   else
   {
    printf("False");
   }

    return 0;

}