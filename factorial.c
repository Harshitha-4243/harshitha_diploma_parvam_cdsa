#include<stdio.h>
int main()
{
    int i,fact=1;
    for(i=1;i<10;i++)
    {
        // fact*=i;
        fact=fact*i;
        // step1: fact=1*1=1
        // step2: fact=1*2=2
        // step3: fact=2*3=6
        // step4: fact=6*4=24
        // step5: fact=24*5=120
        // step6: fact=120*6=720
        // step7: fact=720*7=5040
        // step8: fact=5040*8=40320
        // step9: fact=40320*9=362880
    }
        printf("%d\n",fact);
    return 0;
}