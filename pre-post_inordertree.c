#include<stdio.h>
#include<stdlib.h>
//5,3,7,2,4,6,8
//Define the structute for a tree node
 struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
//function to create a new node
struct Node* createNode(int data){//5
struct Node* node=(struct Node*)malloc(sizeof(struct Node));//memory
node->data=data;//5
node->left=node->right=NULL;//ini
return node;
}
struct Node* insert(struct Node* root,int data){
if(root==NULL)return createNode(data);//NULL?
if(data<root->data)
root->left=insert(root->left,data);
else
root->right=insert(root->right,data);
return root;
}
void inorder(struct Node* root){//5
if(root !=NULL){
   inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}}
void postorder(struct Node* root){
    if(root !=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }

}
void preorder(struct Node* root){
    if(root !=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);    
        }
}
int main(){
    struct Node* root=NULL;
    int values[]={10,6,14,3,8,11,18};
    int n=sizeof(values)/sizeof(values[0]);
    for(int i=0;i<n;i++){
        root=insert(root,values[i]);
    }
    printf("In-order traversal:");
    inorder(root);
    printf("\n");
    printf("Post-order traversal:");
    postorder(root);
    printf("\n");
     printf("Pre-order traversal:");
    preorder(root);
    printf("\n");
    return 0;
}


