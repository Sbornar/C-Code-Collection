// 4 > write a program which  accept string from user and
//   display only digits from that string
//input : "marve89llous121"
//ouput : 89121
//input : Demo
//ouput :


#include<stdio.h>

void  DisplayDigit(char *str)
{
   while (*str != '\0')
   {
       if((*str >= '0') && (*str <= '9') )
       {
        printf("%c",*str);
       }
       str++;
   }
    
   
      
   
}
int main()
{
   
   char Arr[20];

   printf("Enter string..");
   scanf("%[^'\n']s",Arr);

   DisplayDigit(Arr);

    return 0;

}