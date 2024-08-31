// 1 : write a program which accept string from user count number of words
//    from string

//    input : "Marvellous multi OS"
//    output: 3

//    input : "      Marvellous multi     Os  pune"
//    output : 4

#include<stdio.h>

int WordCount(char *str)
{

    int iCnt;
    int iCount=0;

    while(*str!='\0')
    {
        if((*str == ' ') ||(*str == '\n') || (*str == '\t'))
        {
            if(iCount==1)
            {
                iCnt++;
                iCount=0;
            }
        }else
        {
            iCount=1;
        }
        str++;
    }
     iCnt++;
    return iCnt;

}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the string:");
    scanf("%[^'\n]s",Arr);

    iRet =WordCount(Arr);

    printf("total number of words are :%d",iRet);

    return 0;
}