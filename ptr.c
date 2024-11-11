#include<stdio.h>
int main(){
    int a=10;
int* ptr=&a;
printf("The value of a is %d",a);
printf("The address of a is %u",&a);
printf("The ptr is %u",ptr);
printf("The size of ptr is %d",ptr);
return 0;

}
