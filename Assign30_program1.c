// 1  . write a program which accept 2 string from user and concat N characters
//     of second string after first string . value of N should be accept 
//     from user (implement strncat() function).

//     note : if third parameter is greater than the size of second string
//     then concat whole string after first string

 //      input : "Marvellous Infosystems"
 //              "Logic Building"
//                5
//      output : "Marvellous Infosystems Logic"        



#include<stdio.h>

void StrNCatX(char *src, char *dest , int iCnt)
{
     if((*src == '\0') && (*dest == '\0'))
    {
         return;
     }

    while((*src != '\0'))
    {
        src++;
    }

    while((*dest != '\0') && (iCnt != 0))
    {
        *src = *dest;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';





}


int main()
{    
    int iNo ;
    char Arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
     
     printf("Enter number to how many character you want to concat\n");
     scanf("%d",&iNo);
    StrNCatX(Arr , brr , iNo);  // 100 200

    printf("%s",Arr);
     return 0; 
}