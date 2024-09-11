// 4 : write a program which accept one number , two position from
//    user and check whether bit at first or bit at second position
//    is On or OFF.
//    input : 10  3  7
//    output : TRUE

#include <stdio.h>
#include <stdbool.h>  // For using bool type

// Function to check if the bit at the first or second position is ON
bool CheckBits(unsigned int iNo, unsigned int pos1, unsigned int pos2) {
    unsigned int iMask1 = 1 << (pos1 - 1); // Mask for the first position
    unsigned int iMask2 = 1 << (pos2 - 1); // Mask for the second position

    // Check if the bit at either position is ON
    bool isBit1On = iNo & iMask1;
    bool isBit2On = iNo & iMask2;

    // Return true if either bit is ON, otherwise false
    return (isBit1On || isBit2On);
}

int main() {
    unsigned int iNo = 0;    // Variable to store the input number
    unsigned int pos1 = 0;   // Variable to store the first position
    unsigned int pos2 = 0;   // Variable to store the second position
    bool result;             // Variable to store the result of CheckBits function

    // Accept input from the user
    printf("Enter a number: ");
    scanf("%u", &iNo);

    printf("Enter first position: ");
    scanf("%u", &pos1);

    printf("Enter second position: ");
    scanf("%u", &pos2);

    // Call the function to check the bits at the two positions and store the result
    result = CheckBits(iNo, pos1, pos2);

    // Print the result based on the boolean value returned
    if (result) {
        printf("TRUE\n");  // If result is true, print TRUE
    } else {
        printf("FALSE\n"); // If result is false, print FALSE
    }

    return 0;
}