#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

	struct node* f = NULL;
	struct node* r = NULL;
	
void traversal(struct node* ptr){
	printf("Printing the Element of the Queue is\n");
	while(ptr!=NULL){
		printf("Element is--> %d\n",ptr->data);
		ptr = ptr->next;
	}
}

void Enqueue(int val){
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	if(n==NULL){ // if memory ends in heap
		printf("Your Queue has been full\n");
	}
	else{
		n->data = val;
		n->next = NULL;
		if(f==NULL){ // in case of first node
			f=r=n;
		}
		else{
			r->next = n;
			r = n;
		}
	}
}

int Dequeue(){
	int val = -1;
	if(f==NULL){
		printf("Your Queue is Empty\n");
	}
	else{
		struct node* ptr = f;
		f = f->next;
		val = ptr->data;
		free(ptr);
	}
	return val;
}
int main(){

//	traversal(f);
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(50);
	Enqueue(60);
	traversal(f);
	printf("Dequeued Element from the Queue is %d\n",Dequeue());
	printf("Dequeued Element from the Queue is %d\n",Dequeue());
	printf("Dequeued Element from the Queue is %d\n",Dequeue());
	printf("Dequeued Element from the Queue is %d\n",Dequeue());
	printf("Dequeued Element from the Queue is %d\n",Dequeue());
	printf("Dequeued Element from the Queue is %d\n",Dequeue());
	Dequeue();
	
	return 0;
}
