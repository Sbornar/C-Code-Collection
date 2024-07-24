// 3 > Accept character from user . if it is capital then display all the 
//   characters from the input characters till Z. if input charater
//  is small then print all the character in reverse order till a.
// in other cases return directly
//  input : Q
//output: Q R S T U V W X Y Z
// input :m
// output : m l k j i h g f e d c b a
// input : 8
//output: 

#include<stdio.h>

void Display(char ch)
{  
    int iValue = (int )ch;

    if((iValue >= 0)  && (iValue <= 127))
    {
        if((ch >= 'A') && (ch <= 'Z'))
        {
            char cValue = 'Z';
            int iCnt = (int) ch;
            int iEnd = (int) cValue;

             for(iCnt ; iCnt <= iEnd; iCnt++,ch++ )
             {
                printf("%c\t",ch);
             }
           
        }
        else if ((ch >= 'a') && (ch <= 'z'))
        {
            char cValue = 'a';
            int iCnt = (int) ch;
            int iStart = (int) cValue;
            for(iCnt ; iCnt >= cValue ; iCnt--, ch--)
            {
                printf("%c\t",ch);
            }
          
        }
        
        
        
    }
    else
    {
        printf("No such character persent");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter any character:\t");
    scanf("%c",&cValue);

    Display(cValue);

    return 0 ;

}