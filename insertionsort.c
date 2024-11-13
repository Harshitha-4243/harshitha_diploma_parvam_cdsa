#include<stdio.h>
void insertionSort(int arr[],int n){//arr 5
    int i,key,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }
    }
    void printArray(int arr[],int n){
        int i;
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);

        }
        printf("\n");
    }
    int main(){
        int arr[]={5,2,8,1,9};
        int n=sizeof(arr)/sizeof(arr[0]);
        printf("Original array:");
        printArray(arr,n);
        insertionSort(arr,n);
        printf("Sorting array:");
        printArray(arr,n);
        return 0;
    }
