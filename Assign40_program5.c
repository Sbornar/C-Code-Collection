// 5:write a program which accept one number from user and toggle contents
// of first and last nibble of the number . return modified number.
// (nibble is a group of four bits)



unsigned int ToggleBit(unsigned int iNo)
 {
    
}

int main() {
    unsigned int iNo = 0;    
    
    unsigned int result = 0;

  
    printf("Enter a number: ");
    scanf("%u", &iNo);

  

   
    result = ToggleBit(iNo);

  
    printf(" %u:", result);

    return 0;
}