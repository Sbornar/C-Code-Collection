// 3 : write a recursive program which accept string from user
//   and count number of small characters

//   input : HElloWOriD

//   output : 5


  
#include<stdio.h>

int Small(char *str)
{
    static int ismall = 0;

    if(*str != '\0')
    {
        if((*str>= 'a')&&(*str <= 'z'))
        {
            ismall++;
        }
        str++;
        Small(str);

    }
    return ismall;
}
  int main()
  {
    int iRet = 0;
    char arr[30] = "HElloWOriD";

    iRet  = Small(arr);

    printf("%d",iRet);

    return 0;

  }