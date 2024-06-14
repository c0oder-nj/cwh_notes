#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void LinkedListTraversal(struct node* ptr){
	while(ptr!=NULL){
		printf("Element is: %d\n",ptr->data);
		ptr = ptr->next;
	}
}
struct node* delFirstnode(struct node* head){
	struct node* p = head;
	head = head->next;
	free(p);
	return head;
}

struct node* delInbetween(struct node* head,int index){
	struct node* p = head;
	int i=0;
	while(i!=index-1){
		p= p->next;
		i++;
	}
	struct node* q = p->next;
	p->next = q->next;
	free(q);
	return head;
}

struct node* delLastnode(struct node* head){
	struct node *p = head;
	while(p->next!=NULL){
		p = p->next;
	}
	struct node* q = head;
	while(q->next != p){
		q = q->next;
	}
	q->next = NULL;
	free(p);
	return head;
}

struct node* delByValue(struct node* head,int value){
	struct node* p = head;
	while(p->data!=value){
		p = p->next;
	}
	struct node* q = head;
	while(q->next!=p){
		q = q->next;
	}
	q->next = p->next;
	free(p);
	return head;
}

int main(){
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* fourth;
	
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	
	head->data = 10;
	head->next = second;
	
	second->data = 20;
	second->next = third;
	
	third->data = 30;
	third->next = fourth;
	
	fourth->data = 40;
	fourth->next = NULL;
	
	LinkedListTraversal(head);
//	head = delFirstnode(head);
	printf("\n\n");
//	head = delInbetween(head,2);
	
//	head = delLastnode(head);
//	LinkedListTraversal(head);
	
	head = delByValue(head,20);
	LinkedListTraversal(head);

	return 0;
}
