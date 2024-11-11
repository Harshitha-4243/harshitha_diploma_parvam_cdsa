#include<stdio.h>
int main(){
    int* a=NULL;//wild ptr
    printf("%u",a);
    printf("&u",*a);
    return 0;

}