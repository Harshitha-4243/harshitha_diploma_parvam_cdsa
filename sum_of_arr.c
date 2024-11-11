#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++)
    {
    printf("%d\n ",a[i]+5);
    sum+=a[i];
    }
    printf("sum is:%d ",sum);
    }

