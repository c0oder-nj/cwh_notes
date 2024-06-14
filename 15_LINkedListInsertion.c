#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};




void LinkedListTraversal(struct node *ptr){
	while(ptr!=NULL){
		printf("Element is %d\n",ptr->data);
		ptr = ptr->next;
	}
}

struct node * insertAtBeg(struct node *head, int data){
	struct node* ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=head;
	return ptr;
}

struct node* insertInBetween(struct node *head, int data, int index){
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node* insertAtEnd(struct node *head,int data){
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    
    struct node * p = head;
    
    while(p->next!=NULL){
    	p = p->next;
	}
	
	p->next = ptr->next;
	ptr->next = NULL;
	return head;
}

struct node * insertAfterNode(struct node* head,struct node * prevptr, int data){
	struct node * ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = data;
	
	ptr->next = prevptr->next;
	prevptr->next = ptr;
	return head;
	
}


int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *New;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    New = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = fourth;
    
    fourth->data = 40;
    fourth->next = NULL;
    
    
// //    LinkedListTraversal(head);
//    head = insertAtBeg(head,05);
//    LinkedListTraversal(head);
    
//    head = insertInBetween(head,7,1);
//    LinkedListTraversal(head);

    // if(printf("%d\n",head->data)){} // printing without using a semicolon
    
   head = insertAtEnd(head,26);
   LinkedListTraversal(head);
    
    // printf("\nList After insertion is\n");
    // head = insertAfterNode(head,third,9);
    // LinkedListTraversal(head);
    return 0;
}
