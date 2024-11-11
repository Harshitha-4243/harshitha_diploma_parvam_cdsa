#include <stdio.h>
#include<string.h>
int main() {
    // Declare a string variable (character array)
    char str[100];
    printf("Enter a string ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    printf("the str is: %s\n", str);
    int length=strlen(str);
    printf("%d is the length of string",length);

    return 0;
}
