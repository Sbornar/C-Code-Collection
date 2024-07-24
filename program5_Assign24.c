// 5 > accept character from user and display its ASCII value
//   in decimal,octal and hexadecimal format
//input : A
//output : Decimal    65
//         Octal      0101
//         Hexadecimal  0X41


#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    printf("Decimal\t\t %d\n",ch);
    printf("Octal\t\t%o\n",ch);
    printf("Hexadecimal\t 0X%X\n",ch);


}
int main()

{
   char cvalue = '\0';

  
   printf("Enter character:");
   scanf("%c",&cvalue);

     Display(cvalue);
    
  return 0;

}