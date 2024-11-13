#include<stdio.h>
int main(){
    FILE *file=fopen("example.java", "w");//open file in writr mode
    if(file==NULL){
        printf("Error creating file.\n");
        return 1;
        }
        printf("File created succesfully.\n");
        fclose(file);//close the file
        return 0;
}