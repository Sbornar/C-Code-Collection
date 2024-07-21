// 5 > Accept division of student from user and depends on
//  the division display exam timing . there are 4 division
//  in school as A , B , C , D . exam of division A at 7 AM ,
//  B at 8.30 AM , C at 9.20 AM and D at 10.30 AM.
//(application should be case insensitive)
//input : C
//output : your exam at 9.20 AM
//input : d
// output : your exam at 10.30 AM

#include<stdio.h>
#include<stdbool.h>


void DisplaySchedule(char chDiv)
{
    
    if( chDiv >= 'A' && chDiv <= 'D' || chDiv >= 'a' && chDiv <= 'd')
    {
        if(chDiv == 'A' || chDiv == 'a')
        {
          printf("your exam at 7 AM");
        }
        else if( chDiv == 'B' || chDiv == 'b')
        {
             printf("your exam at 8.30 AM");
        }
        else if( chDiv == 'C' || chDiv == 'c')
        {
              printf("your exam at 9.20 AM");
        }
        else if( chDiv == 'D' || chDiv == 'd')
        {
              printf("your exam at 10.30 AM");
        }
    }
    else
    {
        printf("invalid Devision..");
    }
        
    
}


int main()
{
    char cValue = '\0';

    printf("Enter your devision");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}