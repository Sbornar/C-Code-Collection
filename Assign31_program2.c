//  2: write a program which accept string from user and return length of
//  largest word

//  input : "Marvellous multi os infosystems"
//  output : 11

#include<stdio.h>

int WordCount(char *str)
{
   int iMax = 0, ilargest = 0;
    
    if(*str == NULL)
    {
        return -1;
    }

    while(*str!='\0')
    {
        if(*str != ' ')
        {
            iMax++;
        }else 
        {
            if(iMax > ilargest)
            {
                ilargest = iMax;
            
            }
            iMax = 0;
        }
        str++;
    }
    if(iMax > ilargest)
    {
        ilargest = iMax;
    }
    return ilargest;
     
  

}
int main()
{
    int iRet = 0;
    char Arr[50];
    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    iRet=WordCount(Arr);

    printf("largest word length is :%d",iRet);

    return 0;
}