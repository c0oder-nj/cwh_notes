#include<stdio.h>
#include<stdlib.h>

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

void InOrder(struct node* root){
    if(root!=NULL){
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }
}

int isBST(struct node* root){
    if(root!=NULL){
        static struct node* prev = NULL;
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
int main(){
    struct node* root = createNode(9);
    struct node* p1 = createNode(4);
    struct node* p2 = createNode(11);
    struct node* p3 = createNode(2);
    struct node* p4 = createNode(7);
    struct node* p5 = createNode(10);
    struct node* p6 = createNode(15);
    struct node* p7 = createNode(6);
    struct node* p8 = createNode(8);
    struct node* p9 = createNode(14);

    //Linking of all nodes
    root->left = p1;
    root->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

    p4->left = p7;
    p4->right = p8;

    p6->left = p9;

    InOrder(root);
    printf("\n");

    int check = isBST(root);
    if(check == 1){
        printf("Our Tree is B.S.T.\n");
    }
    else{
        printf("Our Tree is not B.S.T.\n");    
      }
return 0;
}