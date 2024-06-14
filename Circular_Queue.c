#include<stdio.h>
#include<stdlib.h>

struct Queue {
	int size;
	int f;
	int r;
	int * arr;
};

void printQueue(struct Queue *q)
{
    int i = q->f+1;
    printf("%d ",i);
    i = 1;
    while (i < q->r + 1)
    {
        printf("%d ", q->arr[i]);
        i++;
    }
    printf("\n");
}

int isFull(struct Queue* q){
	if((q->r+1)%q->size == q->f){
		return 1;
	}
	else
		return 0;
}

int isEmpty(struct Queue* q){
	if(q->f == q->r){
		return 1;
	}
	else
		return 0;
}

void Enqueue(struct Queue* q, int val){
	if(isFull(q)){
		printf("Your Queue is Full\n");
	}
	else{
		q->r = (q->r+1)%q->size;
		q->arr[q->r] = val;
		printf("Enqued element is %d\n",val);
	}
}

int Dequeue(struct Queue* q){
	int a = -1;
	if(isEmpty(q)){
		printf("Your Queue is Empty\n");
	}
	else{
		q->f = (q->f+1)%q->size;
		a = q->arr[q->f];
	}
	return  a;
}
int main(){
	struct Queue *q;
	q = (struct Queue*)malloc(sizeof(struct Queue));
	q->size = 10;
	q->f = 0;
	q->r = 0;
	q->arr = (int *)malloc(q->size*sizeof(int));
	Enqueue(q,10);
	Enqueue(q,20);
	Enqueue(q,30);
	Enqueue(q,40);
	Enqueue(q,50);
	Enqueue(q,60);
	Enqueue(q,70);
	Enqueue(q,80);
	Enqueue(q,90);
	
	// printf("Dequed element from the queue is %d\n",Dequeue(q));
	// printf("Dequed element from the queue is %d\n",Dequeue(q));
	// printf("Dequed element from the queue is %d\n",Dequeue(q));
	// printf("Dequed element from the queue is %d\n",Dequeue(q));
	// printf("Dequed element from the queue is %d\n",Dequeue(q));
	// printf("Dequed element from the queue is %d\n",Dequeue(q));
	

	printQueue(q);
	return 0;
}
