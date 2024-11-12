#include<stdio.h>
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    printf("Original arry:");
    for(i=0;i<n;i++){//0 to 6
    printf("%d ",arr[i]);//64 34 25 12 22 11 90
    
}
printf("\n");
for(i=0;i<n-1;i++){//0 to 6
for(j=0;j<n-i-1;j++){//0 to 6
if(arr[j]>arr[j+1]){//arr[0]>arr[1]64>34
temp=arr[j];//64
arr[j]=arr[j+1];//25
arr[j+1]=temp;//64=>64 25<=>34 25  64 90 
}
}
}
printf("Sorted array: ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}