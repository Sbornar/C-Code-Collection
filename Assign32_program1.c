// 1 : write a program which accept string from user and print below
//    pattern


//    input :"Marvellous";
//    output : M a r v e l l o u s
//             M a r v e l l o u s
//             M a r v e l l o u s
//             M a r v e l l o u s
//             M a r v e l l o u s
//             M a r v e l l o u s
//             M a r v e l l o u s
//             M a r v e l l o u s
//             M a r v e l l o u s
//             M a r v e l l o u s

//     input : "PPA"        
//     output : P P A
//              P P A
//              P P A

#include<stdio.h>

void pattern(char *str)
{
    int iCount= 0;
    char *dest = NULL;
    char *src = NULL;
    src= str;
    dest = str;
    while(*dest != '\0')
    {
        iCount++;
        dest++;
    }

    while(iCount >=1)
    {
        while(*str != '\0')
        {
            printf("%c\t",*str);
            str++;
        }
        str = src;
        printf("\n");
        iCount--;
    }
  

}
int main()
{
    char arr[30] = "Marvellous";

    pattern(arr);

    return 0;
}