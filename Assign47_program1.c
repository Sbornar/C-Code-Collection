// 1: write a program which accept file name from user and count number of
// capital characters from that file.

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int  CountCapital(char FName[])
{
    int fd = 0;
    char Buffer[10] = {'\0'};
    int iRet = 0, iCount =0;

    fd = open(FName , O_RDONLY);

    if(fd == -1)
    {
        printf("unable to open...");
        return 0;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(int i= 0; i <= iRet ;i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
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
    char FileName[30];
    int iRet =0;

    printf("Enter file name");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    printf("Number of capital character are %d",iRet);

    return 0;
}