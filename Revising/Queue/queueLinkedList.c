#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* f = NULL;
struct Node* r = NULL;

void enqueue(int val){
    struct Node* n;
    n = (struct Node*)malloc(sizeof(struct Node));
    if(n == NULL){
        printf("Queue is Full\n No more memory");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f == NULL){ // if front hi null hai means ye pehla node hai meri queue ka
            f = r = n;
        }else{
            r->next = n;
            r = n;
        }
    }
    
}


void dequeue(){
    struct Node* ptr = f;
    f = f->next;
    ptr->next = NULL;
    free(ptr);
}

void traversal(){
    struct Node* ptr = f;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(){
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    traversal();

    dequeue();
    dequeue();
    dequeue();

    traversal();
    
    return 0;
}