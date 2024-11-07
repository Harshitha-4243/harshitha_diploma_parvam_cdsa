#include<stdio.h>
// Don't accept but return`
int add(){
    int x=10,y=30;
    return x+y;
}
int main(){
    int res=add();
    printf("%d",res);
    return 0;
}



// function declaration
// fun sum(){
//     sum = a + b;
//     return sum;
// }
// function call
// sum()
// function with parameters 
// 1st type -> no accept no return
// sum(0 parameters)
// return 0;
// 2nd Type -> accept but no return
// sum(a,b) 
// return 0;
// 3rd Type -> no accept but return
// sum(no parameters) 
// return a;
// 4th Type -> accept and return
// sum(a,b)
// return a, b

// function with arguments
// sum(int c, int d)
// function fun_name(){
// }