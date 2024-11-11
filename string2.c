#include <stdio.h>
int main() {
    // Declare a string variable (character array)
    char str[20];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Read the string using scanf
    scanf("%s", str);  // %s allows spaces to be part of the input

    // Display the entered string
    printf("the str is: %s\n", str);

    return 0;
}
