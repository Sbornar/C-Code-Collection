// 5 ; Accept string from user and check whether the string is palindrome
//    or not without considering its case.

//    input : "1abccBA1";
//    output : TRUE;

#include<stdio.h>
typedef int BOOL;

BOOL StrPallindrome(char *str)
{

    char  *last;
    last = str;

    if(*str == '\0')
    {
        return false;
    }

    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(*str != '\0' )
    {
       if(*str != *last)
       {
          return false;
       }
       str++;
       last--;
    }
    return true;



}

int main()
{
   BOOL bRet;

   char arr[20] = "abccba";

   bRet = StrPallindrome(arr);

   if(bRet == true)
   {
       printf("string is pallindrome\n");
   }
   else
   {
      printf("string is not pallindrome\n");
   }


    return 0;

}