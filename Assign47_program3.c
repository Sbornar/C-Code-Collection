// 3: write a program which accepts file name from user and count number
// of white spaces from that file


#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>


int White_Space(char FName[])
{
     
     int fd=0 , iCount =0;
     int iRet =0;
     char Buffer[10]={'\0'};


     fd = open(FName,O_RDONLY);

     if(fd == -1)
     {
        printf("unable to open");
         return 0;        
     }

     while((iRet = read(fd , Buffer ,sizeof(Buffer))) != 0)
     {  
        for(int i =0 ;i<iRet;i++)
        {
           if((Buffer[i] == ' ') )
           {
             iCount++;
           }
        }
     }
      close(fd);
      return iCount;

}
int main()
{
    int iRet = 0;
    char File_Name[30];

    printf("Entre file name..");
    scanf("%s",File_Name);

    iRet = White_Space(File_Name);

    printf("white spaces  is %d:",iRet);

    return 0;
}