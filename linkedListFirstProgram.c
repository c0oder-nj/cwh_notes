#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
};

void linkedlisttraversal(struct Node* ptr){
    while(ptr!=NULL){
    printf("element: %d\n",ptr->data);
    ptr = ptr->next;
    }
}
int main(){
    // printf("Hello world how are you\n");
    struct Node *first;
    struct Node *second;
    struct Node *third; 

    //allocate memory for nodes in the linked list in heap
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    //link first and second nodes
    first->data =7;
    first->next = second;

    //link second and third nodes
    second->data =11;
    second->next = third;

    //terminate the list at third node
    third->data =15;
    third->next = NULL;
    linkedlisttraversal(first);
    return 0;
}
