#include<stdio.h>
int main(){
    int a[]={1,5,10,15,7};
    int min=a[0];
    for(int i=0;i>=5;i++){
        if(a[i]>min){
            min=a[i];
        }
    }
    printf("max is:%d",min);
    return 0;
}