// 3> write a program which accept string from user and return
//difference between frequency of small characters anf frequency
//of capital characters.
// input : "Marvellous"
//ouput : 6 (8 - 2)

#include<stdio.h>

int Difference(char *Str)
{
    int iSmallCount= 0 , iLargeCount = 0;

    if(*Str == '\0')
    {
        printf("string is empty ...");
    }

    while (*Str != '\0')
    {
        if((*Str >= 'A') && (*Str <= 'Z'))
        {
            iLargeCount++;
        }
        else
        {
            iSmallCount++;
        }
        Str++;
    }

    if(iLargeCount > iSmallCount)
    {
        return iLargeCount - iSmallCount;
    }
    else
    {
        return iSmallCount - iLargeCount;
    }
    
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Differece is : %d",iRet);

    return 0;
}