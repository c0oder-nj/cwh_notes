#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};


struct node* top = NULL;
int count = 0;

int isEmpty(struct node* top){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(){
	struct node* p;
	p = (struct node*)malloc(sizeof(struct node));
	if(p==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
struct node* push(struct node* top, int data){
	if(isFull()){
		printf("Stack Overflow\n");
	}
	struct node* p;
	p = (struct node*)malloc(sizeof(struct node));
	p->data = data;
	p->next = top;
	top = p;
	count++;
	return top;
}

void linkedlisttraversal(struct node* ptr){
	while(ptr!=NULL){
		printf("Element is %d\n",ptr->data);
		ptr = ptr->next;
	}
}
int pop(struct node* tp){
	if(isEmpty(tp)){
		printf("Stakc Underflow\n");
	}
	else{	
	struct node* temp = tp;
	top = tp->next;
	int x = temp->data;
	free(temp);
	count--;
	return x;
	}
}

void peek(struct node* ptr,int index){
	if(index>count){
		printf("Element at %dth position is not present in the stack",index);
	}
	else{
	ptr = top;
	int i=1;
	while(i<index){
		ptr=ptr->next;
		i++;
	}
	printf("Element at %dth position is %d\n",index,ptr->data);
}
}
int main(){
	int element;
	top = push(top,10);
	top = push(top,20);
	top = push(top,30);
	top = push(top,40);
	top = push(top,50);
	top = push(top,60);
	top = push(top,70);
	top = push(top,80);
	linkedlisttraversal(top);
	element = pop(top);
	printf("Popped element is %d\n",element);

	linkedlisttraversal(top);
	peek(top,8);
	return 0;
}
