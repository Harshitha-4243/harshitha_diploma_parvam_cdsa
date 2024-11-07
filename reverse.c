#include<stdio.h>
int main()
{
    int num, rev=0;
    printf("Please,Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("\n The reversed number is:%d",rev);
    return 0;
}

// Ex: num=123
// Step 1: 123>0 - T
// rev = 0*10 + 123%10 = 0 + 3 //rev=3
// num=123/10 = 12
// Step 2: 12 > 0 - T
// rev = 3*10 + 12%10 = 30 + 2 //rev = 32
// num = 12/10 = 1
// Step 3: 1 > 0 - T
// rev = 32*10 + 1%10 = 320 + 1 //rev= 321
// num = 1/10 = 0
// Step 4:0> 0 - T



// 456
//step 1:456>0-T
//REV =0*10 + 456%10 = 0+6//REV=6
//NUM=456/10=45
//STEP 2:45>0-T
//REV=6*10 + 45%10 = 60+5//REV=65
//NUM=45/10=4
//STEP 3:4>0-T
//REV=65*10 + 4%10 = 650+4//REV=654
//NUM=4/10=0

//STEP 4:0>0-F

