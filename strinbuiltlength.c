#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="helloword";
    int length=0;
    while(str[length]!='\0'){
    length++;
    }
    printf("the length of string is %d",length);
    return 0;
}
//with inbuilt function
//printf("the lemgth of string without inbuilt is fin is %d",strlen(str));
//str strlen is the inbuilt function