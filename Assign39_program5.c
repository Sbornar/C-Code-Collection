// 5 : write a program which accept one number from user and
// range of positions from user. toggle all bits from that range

// input : 897   9    13

#include <stdio.h>


unsigned int ToggleBitsInRange(unsigned int iNo, unsigned int start, unsigned int end) {
    unsigned int iMask = 0;

    
    for (unsigned int i = start; i <= end; i++) 
    {
        iMask |= (1 << (i - 1));  
        
        
            }

    
    iNo = iNo ^ iMask;

  
    return iNo;
}

int main() {
    unsigned int iNo = 0;      
    unsigned int start = 0;    
    unsigned int end = 0;       
    unsigned int result = 0;    
    
    printf("Enter a number: ");
    scanf("%u", &iNo);

    printf("Enter the start position: ");
    scanf("%u", &start);

    printf("Enter the end position: ");
    scanf("%u", &end);

    
    result = ToggleBitsInRange(iNo, start, end);

   
    printf("Modified number after toggling bits from position %u to %u: %u\n", start, end, result);

    return 0;
}