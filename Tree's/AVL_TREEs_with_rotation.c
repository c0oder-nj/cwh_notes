#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
    int height;
};

int max(int a,int b){
    return a>b?a:b;
}
int getHeight(struct node* n){
    if(n == NULL)
        return 0;
    return n->height;
}

struct node* createNode(int data){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
    return n;
}

int getBalanceFactor(struct node* n){
    if(n == NULL){
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

struct node* rightRotate(struct node* y){
    struct node* x = y->left;
    struct node* t2 = x->right;

    x->right = y;
    y->left = t2;

    x->height = max(getHeight(x->left),getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left),getHeight(y->right)) + 1;

    return x;
}

struct node* leftRotate(struct node* x){
    struct node* y = x->right;
    struct node* t2 = y ->left;

    y->left = x;
    x->right = t2;

    x->height = max(getHeight(x->left),getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left),getHeight(y->right)) + 1;

    return y;
}

struct node* insert(struct node* root,int key){
    if(root == NULL){
        return createNode(key);
    }

    if(key<root->data){
        root->left = insert(root->left,key);
    }
    else if(key>root->data){
        root->right = insert(root->right,key);
    }
    return root;

    root->height = max(getHeight(root->left),getHeight(root->right)) + 1;
    int bf = getBalanceFactor(root);

    //Left Left Insertion case
    if(bf>1 && key<root->left->data){
        return rightRotate(root);
    }

    //Right Right Insertion case
    if(bf<-1 && key > root->right->data){
        return leftRotate(root);
    }

    //Left Right Insertion Case
    if(bf>1 && key > root->left->data){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    //Right Left Insertion Case
    if(bf<-1 && key< root->right->data){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void preOrder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    struct node* root = NULL;
    root = insert(root,1);
    root = insert(root,2);
    root = insert(root,4);
    root = insert(root,5);
    root = insert(root,6);
    root = insert(root,3);

    preOrder(root);
return 0;
}