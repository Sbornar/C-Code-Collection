// 3 : write a program which 2 string from user and check whether
//     first N contents of two string are equal or not (implement strcmp() function).

//     note : if thired parameter is greater than the size of second string then concat whole
//        string after first string

//        input : "Marvellous Infosystems"
//               "Marvellous logic Building"
//                  10
//         output : TRUE         

#include<stdio.h>
typedef int BOOL;

BOOL StrNCmpX(char *src ,char *dest ,int iCnt)
{
    BOOL bValue = true;
    if((*src == '\0') && (*dest == '\0'))
    {
        return true;
    }
    
    while((*src != '\0') && (*dest != '\0') && (iCnt != 0))
    {
       if(*src != *dest )
       {
           break;
       }
        
        *src++;
        *dest++;
        iCnt--;
    }
     
     if((*src == *dest ))
     {
        return true;
     }
     else
     {
        return false;
     }


}
int main()
{
   
   BOOL bRet = true;
   char arr[50] = "Marvellous Infosystems";
   char brr[30]  ="Marvellous Logic Building";

    bRet = StrNCmpX(arr,brr,10);

   if(bRet == true)
   {
      printf("Bothe string are equal");

   }
   else
   {
      printf("Both string are not equal");
   }


    return 0;
}