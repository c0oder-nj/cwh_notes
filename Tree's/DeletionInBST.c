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

void insert(struct node* root, int key){
    struct node* prev;

    while(root!=NULL){
        prev = root;
        if(root->data == key){
            printf("Element %d is already present in the Binary Search Tree\n",key);
            return;
        }
        else if(root->data>key){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node* new = createNode(key);
    if(prev->data>new->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
    printf("Element successfully inserted\n");
}

void RecursiveInsert(struct node* root,int key){
    static struct node* prev;
    if(root!=NULL){
        prev = root;
        if(root->data == key){
            printf("Element is already present.\n");
            return; 
        }
        else if(root->data>key){
            RecursiveInsert(root->left,key);
        }
        else if(root->data < key){
            RecursiveInsert(root->right,key);
        }
        
    }
    else{
            struct node* new = createNode(key);
            if(prev->data > new->data){
                prev->left = new;
            }
            else{
                prev->right = new;
            }
        }
}

struct node* InorderPredecure(struct node* root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}

struct node* DeleteNode(struct node* root, int value){
    struct node* iPre;

    if(root == NULL){
        return NULL;
    }

    //Deleting for the lead node
    if(root->left == NULL && root->right == NULL && root->data == value){
        free(root);
        return NULL;
    }
    if(root->left == NULL && root->right == NULL && root->data != value){
        printf("The element %d you want to delete is not present in the tree.\n",value);
    }
    if(root->data > value){
        root->left = DeleteNode(root->left,value);
    }

    else if(root->data < value){
        root->right = DeleteNode(root->right,value);
    }

    //Deleting Structure when the node is found
    else{
        iPre = InorderPredecure(root);
        root->data = iPre->data;
        root->left = DeleteNode(root->left,iPre->data);
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
    // struct node* s = IterativeSearch(root,20);
    // if(s!=NULL){
    //     printf("Founded %d",s->data);
    // }
    // else{
    //     printf("NOt founded: ");
    // }
    // insert(root,8);
    RecursiveInsert(root,2);
    InOrder(root);
    printf("\n");
    DeleteNode(root,15);
    // insert(root,15);
    InOrder(root);
    printf("\n");
return 0;
}