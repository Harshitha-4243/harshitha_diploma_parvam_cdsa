#include <stdio.h>

int main() {
    char str[100];  // Declare a string (array of characters) with a size of 100

    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Use fgets to read a string with spaces
    fgets(str, sizeof(str), stdin);
    
    // Display the entered string
    printf("You entered: %s\n", str);
    
    return 0;
}
