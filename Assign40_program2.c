// 2: write a program which accept one number and position from user and
// off that bit . return modified number
// input : 10 2
// output : 8

#include <stdio.h>


unsigned int OffBit(unsigned int iNo, unsigned int pos) {
    unsigned int iMask = ~(1 << (pos - 1)); 
    
    
    iNo = iNo & iMask;

    return iNo; 
}

int main() {
    unsigned int iNo = 0;    
    unsigned int pos = 0;    
    unsigned int result = 0; 

    
    printf("Enter a number: ");
    scanf("%u", &iNo);

    printf("Enter the bit position to turn off: ");
    scanf("%u", &pos);

    
    result = OffBit(iNo, pos);

   
    printf("Modified number after turning off bit at position %u: %u\n", pos, result);

    return 0;
}