// 5: write application which accept file name from user and one string
// from user.write that string at the end of file.

// intput : Demo.txt
// output: ........Demo.txt.

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int fd = 0, iRet = 0,iiRet = 0 , iRd = 0;
    char Arr[300];
    char Buffer[100] = {'\0'};


    printf("Enter file that you want to open");
    scanf("%s",Arr);

    fd = open(Arr, O_RDWR   | O_APPEND);
    if(fd == -1)
    {
        printf("unable to open");
        return 0;
    }

     iRet = write(fd ,"Demo.txt", 8);

     printf("number of byte %d\n",iRet);
     
   while((iiRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        printf("%s",Buffer);
        memset(Buffer,0,sizeof(Buffer));
    }
     

   
    

     close(fd);
     close(iRet);

     return 0;

     




}