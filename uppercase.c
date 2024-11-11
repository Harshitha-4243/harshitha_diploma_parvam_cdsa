#include<stdio.h>
int main(){
    char str[]="Hello,World";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){//alpha
        str[i]=str[i]-'a'+'A';//ascii e-97+65=>
        }
        i++;
    }
    printf("Uppercase string:%s\n",str);
    return 0;

}