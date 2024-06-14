#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr; // for array implementation of queue basically ye array ko apn dynamically memory allocate krenge isliye ye mene ek variable ka address liya hai bascially arr ek variable hai *arr mtlb pointer jo ki mere array data type ke base address ko store kr lega 
};

int isEmpty(struct queue* q){
    if(q->r == q->f){
        return 1;
    }else{
        return 0;
    }
}

void dequeue(struct queue *q){
    int val;
    if(!isEmpty(q)){
        q->f++;
        val = q->arr[q->f];
        q->arr[q->f] = 0;
    }
}

void printQueue(struct queue *q){
    int i=0;
    while(i<q->size){
        printf("%d ",q->arr[i]);
        i++;
    }
    printf("\n");
}

int isFull(struct queue* q){
    if(q->r == q->size -1 ){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct queue* q,int val){
    if(!isFull(q)){
        q->r++;
        q->arr[q->r] = val;
    }
}


int main(){

    struct queue *q;
    
    q->size = 10;
    q->f = q->r = -1;
    q->arr = (int*)malloc(q->size*sizeof(int));

    printQueue(q);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,10);
    enqueue(q,20);

    // enqueue(q,30);
    // enqueue(q,40); // last two will not inserted to the queue because it becomes full

    printQueue(q);

    dequeue(q);
    dequeue(q);
    dequeue(q);

    printQueue(q);

    return 0;
}