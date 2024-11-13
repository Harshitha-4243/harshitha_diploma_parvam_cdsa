#include<stdio.h>
#include<stdlib.h>
//5,3,7,2,4,6,8
//Define the structute for a tree node
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;
//function to create a new node
Node* createNode(int data){//5
Node* newNode=(Node*)malloc(sizeof(Node));//memory
newNode->data=data;//5
newNode->left=newNode->right=NULL;//ini
return newNode;
}
//function to insert a node into the binary tree
Node* insertNode(Node* root,int data){//5 3
if(root==NULL){//NULL?
root=createNode(data);//5
}else if (data<=root->data){//7<=5
root->left=insertNode(root->left,data);//left,3
}else{

    root->right=insertNode(root->right,data);//right,7
}
return root;
}
//Function to print the binary tree (inordertraversal)
void printTree(Node* root){//5
if(root !=NULL){
    printTree(root->left);//left
    printf("%d ",root->data);//data
    printTree(root->right);//right
}}
int main(){
    Node* root=NULL;
    //insert nodes into the binary tree
    root = insertNode(root,5);//null,5
    root = insertNode(root,3);
    root = insertNode(root,7);
    root = insertNode(root,2);
    root = insertNode(root,4);
    root = insertNode(root,6);
    root = insertNode(root,8);
    //print the binary tree
    printf("Binary Tree:");
    printTree(root);
    printf("\n");
    return 0;


}

