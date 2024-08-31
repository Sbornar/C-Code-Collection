// 5. write a program which accept string from user and replace
//   each occurrence of first character of each word into capital
//   case.

//   input : "marvellous infosystems by piyush khairnar"
//   output : "Marvellous Infosystems By Piyush Khairnar"

#include<stdio.h>

void StrCap(char *str)
{
    int iTarget = 1;

    while(*str != '\0')
    {
        if((*str == ' ') || (*str== '\t'))
        {
            iTarget=1;
            str++;
        }

        if(iTarget==1)
        {
            (*str) = (*str) - 32;
            iTarget = 0;
        }
        str++;
    }
}
int main()
{
    char arr[50]="mavellous infosystems by piyush khairnar";
    
     printf("befor updated :\n%s",arr);
    StrCap(arr);

    printf("after updated :\n%s",arr);
        

    return 0;
}