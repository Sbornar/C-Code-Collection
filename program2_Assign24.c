// 2 > accept character from user . if character is small display
//   its corresponding capital character and if it small then 
//  display its corresponding capital . in other case display
//   as it is
//  input  : Q
//  output : q
//input  : m
//  output : M
//input  : 4
//  output : 4
//input  : %
//  output : %


#include<stdio.h>

void Display(char ch)
{  
    int iValue = (int )ch;

    if((iValue >= 0)  && (iValue <= 127))
    {
        if((ch >= 'A') && (ch <= 'Z'))
        {
            ch = ch + 32;
            printf("%c",ch);
        }
        else if ((ch >= 'a') && (ch <= 'z'))
        {
            ch = ch - 32;
            printf("%c",ch);
        }else
        {
            printf("%c",ch);
        }
        
    }
    else
    {
        printf("No such character persent");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter any character:\t");
    scanf("%c",&cValue);

    Display(cValue);

    return 0 ;

}