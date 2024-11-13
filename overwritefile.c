#include<stdio.h>
int main(){
    FILE *file=fopen("hello.txt", "w");//open file in writr mode
    if(file==NULL){
        perror("Error creating file");//error formate
        return 1;
        }
        //write data ti the file
        fprintf(file," Thistfhbnline.\n");
        fprintf(file,"Writing to file will overwrite its content.\n");
        fclose(file);//close the file
        printf("File created succesfully.\n");
        return 0;
}