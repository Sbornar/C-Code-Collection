//  4 .write a program which accept string from user and print below
//    pattern

//    input : 'Marvellous';
//    output: M A R V E L L O U S
//            M A R V E L L O U S
//            M A R V E L L O U S
//            M A R V E L L O U S
//            M A R V E L L O U S
//            M A R V E L L O U S
//            M A R V E L L O U S
//            M A R V E L L O U S
//            M A R V E L L O U S
//            M A R V E L L O U S


#include<stdio.h>

void pattern(char *str)
{
    char *src = NULL,*dest = NULL;
    int iCnt = 1, iCount = 1,iLength = 1,iNo= 1;
     
     src=str;
     dest= str;

    while(*dest != '\0')
    {
        iLength++;
        dest++;
    }

    while(iLength > iNo)
    {
        while((*src != '\0'))
        {
            if((*src >= 'A')&&(*src <= 'Z'))
            {
                printf("%c\t",*src);
            }
            else
            {
                printf("%c\t",(*src)-32);
            }
            src++;
        }
          printf("\n");
           src=str;
           iNo++;
    }

}
int main()
{
    char arr[30]="Marvellous";

    pattern(arr);

    return 0;
}