// 4 : write application which accept file name from user and display
// size of file.
// input: Demo.txt
// output : 56 bytes

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
   int fd = 0, iRet = 0;
    char Arr[30];
    char brr[100] = {'\0'};

    printf("Entre name of file..");
    scanf("%s",Arr);

    fd = open(Arr ,O_RDWR);
    if(fd == -1)
    {
        printf("unable to open..");
        return 0;
    }
     
     iRet = read(fd , brr ,100);

     printf("File size is %d bytes.",iRet);

     close(fd);





}