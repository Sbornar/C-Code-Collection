// 5 : write a program which accept file name and one count from user and read that number of 
// characters from starting position

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>


int DisplayN (char FName[] , int iValue)
{
     
     int fd=0 , iCount =0;
     int iRet =0;
     char Buffer[100]={'\0'};


     fd = open(FName,O_RDONLY);

     if(fd == -1)
     {
        printf("unable to open");
         return 0;        
     }

     while((iRet = read(fd , Buffer ,sizeof(Buffer))) != 0)
     {  
        for(int i =0 ;i<iValue ;i++ )
        {
            printf("%c",Buffer[i]);
        }
     }
      close(fd);
      return 0;

}
int main()
{
    int iRet = 0;
    char File_Name[30];

    printf("Entre file name..");
    scanf("%s",File_Name);

     DisplayN (File_Name ,12);

  

    return 0;
}