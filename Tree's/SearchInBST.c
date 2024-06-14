#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* left;
    int data;
    struct node* right;
};

void InOrder(struct node* root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }
}
struct node* createNode(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}


struct node* IterativeSearch(struct node* root,int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
struct node* Search(struct node* root, int key){
    if(root != NULL){
        if(root->data == key){
            return root;
        }
        else if(root->data >key){
            return Search(root->left,key);
        }
        else{
            return Search(root->right,key);
        }
    }
}
int main(){
    struct node* root = createNode(10);
    struct node* p1 = createNode(7);
    struct node* p2 = createNode(15);
    struct node* p3 = createNode(5);
    struct node* p4 = createNode(8);
    struct node* p5 = createNode(13);
    struct node* p6 = createNode(18);

    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

    // InOrder(root);
    // struct node* s = Search(root,20);
    struct node* s = IterativeSearch(root,20);
    if(s!=NULL){
        printf("Founded %d",s->data);
    }
    else{
        printf("NOt founded: ");
    }
return 0;
}