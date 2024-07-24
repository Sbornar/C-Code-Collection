// 4 > Accept character from user and check whether it is special
//  symbol or not (! , @ , # , $, %, ^ ,&, *).
//input : %
//output : TRUE
//input : d
//output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    int iValue = (int)ch;

    if(ch == '!'||ch == '@'||ch == '#'||ch == '$'||ch == '%'||ch == '^'||ch == '&'||ch == '*')
    {
        return true;
    }else
    {
        return false;
    }

}
int main()

{
   char cvalue = '\0';

   bool bRet = false;

   printf("Enter character:");
   scanf("%c",&cvalue);

  bRet = CheckSpecial(cvalue);

  if(bRet == true)
  {
    printf("TRUE");
  }
  else
  {
    printf("FALSE");
  }
    
  return 0;

}