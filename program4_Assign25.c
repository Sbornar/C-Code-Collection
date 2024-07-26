// 4> Write a program which accept string from user and check 
//  whether it cotains vowels in it or not
//input : "marvellous"
//ouput : TRUE
//input : Demo
//output : TRUE
//inpiut : xyz
//output : FALSE

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOl;

bool CheckVowel(char *str)
{
    while (*str != '\0')
    {
         if(*str == 'a' || *str == 'e'||*str =='i'||*str == 'o'||*str=='u'||
            *str == 'A' || *str == 'E'||*str =='I'||*str == 'O'||*str=='U')
            {
                return 1;
            }
            str++;
    }
    return 0;
    
}
int main()
{
    char Arr[20];
    bool bRet = FALSE;

    printf("Enter string..");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("True");
    }else
    {
        printf("False");
    }
     


    return 0;
}