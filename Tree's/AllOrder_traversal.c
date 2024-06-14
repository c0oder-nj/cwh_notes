#include<stdio.h>
#include<stdlib.h>
// Creating structure for node
struct node{
    struct node* left;
    int data;
    struct node* right;
};

struct node* createNode(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void PostOrder(struct node* root){
    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ",root->data);
    }
}

void InOrder(struct node* root){
    if(root!=NULL){
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }
}
int main(){
    struct node* root = createNode(4);
    struct node* p1 = createNode(1);
    struct node* p2 = createNode(6);
    struct node* p3 = createNode(5);
    struct node* p4 = createNode(2);

    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    
    printf("PreOrder Traversal is this: ");
    preOrder(root);
    printf("\n");

    printf("PostOrder Traversal is this: ");
    PostOrder(root);
    printf("\n");

    printf("InOrder Traversal is this: ");
    InOrder(root);
    printf("\n");
return 0;
}