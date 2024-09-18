// 2 : write application which accept file name from user and create that file
// input: Demo.txt
// output : File created successfully.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
   int fd = 0;
   char Arr[30];

   printf("Enter the name of file which you want to open.");
   scanf("%s",Arr);

   fd=creat(Arr , 0777);

   if(fd == -1)
   {
      printf("unable to open file.");
      return 0;
   }else
   {
      printf("file created successfully.");
   }

    return 0;
}