// 1: write a recursive program which accept string from user and
//  count white spaces

//  input : HE llo WOr ID
//  output : 3

 #include<stdio.h>

int WhiteSpace(char *str)
{
     static int iNo=0;

     if(*str != '\0')
     {
        if(*str == ' ')
        {
            iNo++;
        }
        str++;
        WhiteSpace(str);
     }
     return iNo;

}
 int main()
 {
    int iRet = 0;

    char arr[30] = "HE llo WOr Id";

    iRet = WhiteSpace(arr);

    printf("%d",iRet);

    return 0;
 }