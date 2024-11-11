#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d ",&n);
    int* array=(int*)malloc(n*sizeof(int));
    if(array == NULL){
        printf("Memory allocateion failed\n");
        return 0;
    }
    printf("Enter %d elements :");
    for(int i=0; i<n; i++){
        scanf("%d ",array[i]);
    }
    printf("you entered:");
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);

    }
    printf("\n");
    
    free(array);

    return 0;
}
