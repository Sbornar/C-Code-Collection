// 3 : write a program which accept one number from user and check
// whether 9th or 12th bit is on or OFF
// input : 257
// output : TRUE

#include <stdio.h>
#include <stdbool.h>  


bool CheckBits(unsigned int iNo) 
{
    unsigned int iMask9 = 1 << 8;   
    unsigned int iMask12 = 1 << 11; 
   
    bool isBit9On = iNo & iMask9;
    bool isBit12On = iNo & iMask12;


    return (isBit9On || isBit12On);
}

int main() 
{
    unsigned int iNo = 0;  
    bool bresult;           

    
    printf("Enter a number: ");
    scanf("%u", &iNo);

    
    bresult = CheckBits(iNo);

    
    if (bresult)
    {
        printf("TRUE\n");  
    } else 
    {
        printf("FALSE\n"); 
    }

    return 0;
}