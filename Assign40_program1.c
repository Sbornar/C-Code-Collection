// 1 : write a program which accept one number and position from user and
// check whether bit at that position is on  or off. it bit is one
// return true otherwise return false
// input: 10 2
// output : true

#include <stdio.h>
#include <stdbool.h>  


bool CheckBit(unsigned int iNo, unsigned int pos) {
    unsigned int iMask = 1 << (pos - 1);  
    
    
    if (iNo & iMask) {
        return true;  
    } else {
        return false; 
    }
}

int main() {
    unsigned int iNo = 0;   
    unsigned int pos = 0;   
    bool result = false;    

   
    printf("Enter a number: ");
    scanf("%u", &iNo);

    printf("Enter the bit position: ");
    scanf("%u", &pos);

   
    result = CheckBit(iNo, pos);

   
    if (result) {
        printf("TRUE\n");  
    } else {
        printf("FALSE\n"); 
    }

    return 0;
}