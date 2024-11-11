#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="Hello";
    char b[50];
    strcpy(b,a);
    printf("copied is %s\n",b);
    printf("%d",strlen(b));
    scanf(a,b);

    return 0;
}