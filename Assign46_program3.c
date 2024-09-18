// 3: write a application which accept file name from user and read All
// data from that file and display contents on screen.
// input: Demo1.txt
// output: Display all data of file


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
   
   int fd = 0;
   char File_name[30];
   char Arr[100] = {'\0'};
   int iRet = 0;

   printf("Enter file name.");
   scanf("%s",File_name);

   fd = open(File_name , O_RDONLY);

   if(fd == -1)
   {
      printf("Unable to open...");
      return 0;

   }

   iRet = read(fd , Arr , 100);

   printf("number of bite read from file %d :\n",iRet);

   printf("%s",Arr);
   
   close(fd);


    return 0;
}