#include<stdio.h>
int main(){
    FILE *file=fopen("example.txt", "r");//open file in writr mode
    if(file==NULL){
        printf("Error opening file.\n");
        return 1;
        }
        printf("File opened succesfully.\n");
        fclose(file);//close the file
        return 0;
}