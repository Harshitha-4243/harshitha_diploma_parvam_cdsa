#include<stdio.h>
// Accepting the arguments and returning the value
int add(int x,int y){
    int c=x+y;
    return c;
}
int main(){
    int a=20,b=30;
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}
