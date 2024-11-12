#include<stdio.h>
#include<stdlib.h>
//Define a node in the linked list
typedef struct Node{
    int data;
    struct Node* next;
}Node;
//Function to create a new node
Node* createNode(int value){
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->data=value;
     newNode->next=NULL;
     return newNode;

}
//Function to insert a node at the end of the linked list
void append(Node** head,int value){//1 20
Node* newNode=createNode(value);//10
if(*head==NULL){//if list is empty,set new node as heqad
*head=newNode;//20
return;
}
Node* temp=*head;
while (temp->next!=NULL){//Traverse to the end of the list
temp=temp->next;
}
temp->next=newNode;//Link the new node at the end

}
//Function to delete a node by value
void deleteNode(Node** head,int value){//1 20
Node* temp=*head;//temp=1
Node* prev=NULL;//prev=add of succesive prev node
if(temp !=NULL && temp->data==value){//if head node has the value
*head=temp->next;//head->2
free(temp);//free(1)
return;
}
//Traverse the list to find the node to delete
while(temp!=NULL && temp->data !=value){
    prev=temp;//
    temp=temp->next;//

}
if(temp==NULL){//value not found
printf("Value %d not found in the list.\n",value);
return;
}
prev->next=temp->next;//Unlink the node
free(temp);//Free the memory
}
//Function to display the linked list
void displayList(Node* head){
    Node* temp=head;
    printf("Linked List:");
    while(temp !=NULL){//1!=null?T}
    printf("%d ->",temp->data);//10->20->30
    temp=temp->next;//1
}
printf("NULL\n");
}
//Main function to test the linked list operations
int main(){
    Node* head=NULL;
    append(&head,10);//10
    append(&head,20);//head value 20
    append(&head,30);//30
    displayList(head);//Linked List:10->20->30->NULL
    deleteNode(&head,20);//1 20
    displayList(head);//Linked List:10->30->NULL
    deleteNode(&head,40);//Value 40 not found in the list
    return 0;
}