#include<stdio.h>
int main()
{
    int num, rev=0,pal;
    printf("Please Enter a Number:");
    scanf("%d",&num);
    pal = num;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    // num = 0
    if(pal == rev){ 
        printf("%d is palindrome",pal);
    }
    else{ 
        printf("%d is not palindrome, because it is not matching: %d",pal,rev);
    }
    return 0;
}