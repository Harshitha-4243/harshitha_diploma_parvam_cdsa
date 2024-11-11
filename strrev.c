#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[50]="Hello";
    char c[70]="world";
    char b[50];
    //comparition and find the length,and copied str and concatinated str both are marged in one element
    strcpy(b,a);
    printf("copied string is %s\n",b);
    printf("length of cpy str is %d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
    strcat(b,c);
    printf("concatinated str2 %s\n",b);
    int res=strcmp(a,b);
    printf("&d\n",res);
    if(res==0){
        printf("both string are equal");
    }
    else if (res==-1){
        printf("string1 is lesser than str2\n");
    }
    else{
        printf("string1 is greater than str2\n");
    }
    //reverse the str
    printf("%s\n",strrev(a));
    //upper
    for(int i=0;a[i]!='\0';i++){//'\0' we use thisEnd condition of the string
    a[i]=toupper(a[i]);
    }
    printf("%s",a);
    return 0;
    
}
