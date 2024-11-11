#include<stdio.h>
#include<stdlib.h>
#define MAX 5// Define maximum size of the stack
//define the stack structure
struct Stack{
    int items[MAX];
    int top;
};
//Initialize the stack
//struct stack st;
//struct stack *s=&st;
void initStack(struct Stack *s){
    s->top=-1;//=1(null)0,1,2,3,4


}
//Check if the stack is full
int isFull (struct Stack *s){
    return s->top==MAX-1;//2==4

}
//Check if the stack is empty
int isEmpty(struct Stack *s){
    return s->top==-1;//2==-1
}
//Push an element onto the stack
void push(struct Stack *s,int value){//30
if(isFull(s)){
    printf("Stack is full Cannot push %d\n",value);
}else{
    s->top++;//-1=>0=>1=>2
    s->items[s->top]=value;//item[2]=30
    printf("Pushed %d onto the stack\n",value);
}
}
//Pop an element from the stack
int pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty Connot pop\n");
        return -1;
    }else{
        int poppedValue=s->items[s->top];//s->item[2]
        s->top--;//1
        printf("Popped %d from the stack\n",poppedValue);
        return poppedValue;
    }

    
    }
    //Display the stack elements
    void displayStack(struct Stack *s){
        if(isEmpty(s)){
            printf("Stack is empty\n");
        }else{
            printf("Stack elements:");
            for(int i=0;i<=s->top;i++){//2 to 1
            printf("%d ",s->items[i]);//10 20);
            }
            printf("\n");

        }
        }
        int main(){
            struct Stack stack;
            initStack(&stack);
            push(&stack,10);
            push(&stack,20);
            push(&stack,30);
             push(&stack,40);
              push(&stack,50);
                push(&stack,60);

            displayStack(&stack);
            pop(&stack);//30
            displayStack(&stack);//10 20
            return 0;        
            }
    



