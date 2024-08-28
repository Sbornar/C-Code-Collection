//  2 ; write a program which 2 string from user and check whether contents
//      of two strings are equal or not . ( implement strcmp()  function)

//      input :" Marvellous Infosystems "
//              " Marvellous Infosystems"
//       output : TRUE;       


#include<stdio.h>
typedef int BOOL;

BOOL StrCmpx(char *src , char *dest)
{
    if((*src == '\0') && (*dest == '\0'))
    {
        return true;
    }

    while( (*src != '\0') && (*dest != '\0'))
    {
        
        src++;
        dest++;
    }

    if(*src == *dest)
    {
        return true;
    }
    else
    {
        return false;
    }
}




int main()
{
    BOOL bRet = true;
    char Arr[50] = " Marvellous Infosystems";
    char brr[50] = " Marvellous Infosystems";

    bRet = StrCmpx(Arr,brr);

    if(bRet == true)
    {
        printf("Both string are equal");
    }
    else
    {
        printf("Both string are not equal");
    }

    return 0;

}