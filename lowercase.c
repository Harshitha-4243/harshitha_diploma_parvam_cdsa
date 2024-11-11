#include<stdio.h>
int main(){
    char str[]="Hello,World";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z'){//alpha
        str[i]=str[i]+'a'-'A';//ascii e-97+65=>
        }
        i++;
        }
    printf("Lowercase string:%s\n",str);
    return 0;

}