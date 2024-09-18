// 1 : write a  aplication which accept file name from user and open
// that file in read mode
// input: Demo.txt
// output: Dile opened succesfully.


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
   int fd =0, Ofd=0 ;
   char arr[30];
   char brr[30];

   printf("Enter file name");
   scanf("%s",arr);

   fd  = creat(arr , 0777);
   if(fd == -1)
   {
      printf("unable to create file.");
      return 0;
   }
   
   printf("Enter name you want to open.");
   scanf("%s",brr);
   Ofd = open(brr ,O_RDONLY);

   if(Ofd == -1)
   {
      printf("Unable to open..");
      return 0;
   }
   else
   {
      printf("File opened Successfully.");
   }
   



    return 0;
}
