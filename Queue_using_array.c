#include<stdio.h>
#include<stdlib.h>

struct queue { 
	int size;
	int f;
	int r;
	int * arr;
};



int isfull(struct queue* q){
	if(q->r == q->size-1){
		return 1;
	}
	else
		return 0;
}

int isEmpty(struct queue *q){
	if(q->f == q->r){
		return 1;
	}
	else 
		return 0;
}

void enqueue(struct queue* q, int val){
	if(isfull(q)){
		printf("Your Queue is full\n");
	}
	else{
		q->r++;
		q->arr[q->r] = val;
	}
}

void dequeue(struct queue* q){
	
	if(isEmpty(q)){
		printf("Your Queue is empty\n");
	}
	else{
		q->f++;
		printf("Dequeued element from the queue is %d\n",q->arr[q->f]);
	}
}
int main(){
	struct queue *q;
    q = (struct queue*)malloc(sizeof(struct queue));
	q->size = 10;
	q->f = q->r = -1;
	q->arr = (int*)malloc(q->size*sizeof(int));
	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,30);
	enqueue(q,40);
	enqueue(q,50);
	
	dequeue(q);
	dequeue(q);
	dequeue(q);
	
	enqueue(q,2);
	enqueue(q,4);
	enqueue(q,6);
	enqueue(q,8);
	enqueue(q,10);
	enqueue(q,12);

	return 0;
}
