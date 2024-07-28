// 2 > write a program which accet string from user and convert it
//     into upper case
// input : "Marvellous Multi OS"
//  ouput : MARVELLOUS MULTI OS

#include<stdio.h>

void  Struprx(char *str)
{
   while (*str != '\0')
   {
       if((*str >= 'a') && (*str <= 'z'))
          {
            *str = *str - 32;
          }
         str++; 
   }
      
   
}
int main()
{
   
   char Arr[20];

   printf("Enter string..");
   scanf("%[^'\n']s",Arr);

   Struprx(Arr);

  printf("Modified string is : %s",Arr);



    return 0;

}