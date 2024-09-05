// 3 : write a recursive program which accept string from
//     user and count number od charactrs

//     input :Hello

//     output : 5
    
    #include<stdio.h>

    int Strlen(char *str)
    {
        static int iValue = 0;
        if(*str != '\0')
        {
            iValue++;
             str++;
            Strlen(str);
        }

        return iValue;
    }
    int main()
    {
        int iRet = 0;

        char arr[20];

        printf("Enter string");
        scanf("%s",arr);

        iRet = Strlen(arr);

        printf("%d",iRet);

        return 0;

    }