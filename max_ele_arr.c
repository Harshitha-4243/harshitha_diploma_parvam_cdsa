#include<stdio.h>
int main(){
    int a[]={1,2,7,3,4};
    int max=a[0];
    for(int i=0;i<=5;i++){
        if(a[i]>max){
            max=a[i];
        }  
    }
    printf("max is:%d",max);
    return 0;
}