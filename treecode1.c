#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;

};

struct node* createnode(int x){
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }else{
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
    return;
}
}
void preorder(struct node* root){
    if(root==NULL){
        return ;
    }else{
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
    return;
}
}
void postorder(struct node* root){
    if(root==NULL){
        return ;
    }else{
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
    return;
}

}

int main(){
    struct node* root=NULL;
    root=createnode(8);
    root->left=createnode(3);
    root->right=createnode(10);
    root->left->left=createnode(1);
    root->left->right=createnode(7);
    root->right->right=createnode(14);

    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");


}