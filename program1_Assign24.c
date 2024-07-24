// 1 > write a program which display ASCII table . table contains
//   symbol,decimal,Hexadecimal and Octal representation of
//  every member from ( 0 to 255)




#include<stdio.h>
#include<string.h>

void DisplayASCII()
{
   int i = 0;

        printf("DEX\t HEX\t OCTAL\t CHAR");
        printf("\n");
   for (i  ; i <= 255 ; i++)
    {
          char ch = '\0';
           ch = i;

        printf("%d\t%x\t%o\t%c",i,i,i,ch);
        printf("\n");
       
   }
    
      

}
int main()
{

    DisplayASCII();

    return 0;
}