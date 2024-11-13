#include<stdio.h>
int main(){
    FILE *file=fopen("hello.txt", "r");//open file in writr mode
    if(file==NULL){
        perror("Error opening file");//error formate
        return 1;
        }
        //write data ti the file
        fprintf(file," This is the first line.\n");
        fprintf(file,"Opening to file will overwrite its content.\n");
        fclose(file);//close the file
        printf("File opened succesfully.\n");
        return 0;
}