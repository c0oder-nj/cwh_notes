#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *create_list(struct node *start);
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *del(struct node *start,int data);


int main(){
	struct node *start;	
	int choice,data,item,pos;
	
	start = create_list(start);
	display(start);
	return 0;
}

struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	start;
	if(n==0)
		return start;

	printf("Enter the element to be inserted : ");
	scanf("%d",&data);
	start=addatbeg(start,data);

	for(i=2;i<=n;i++)
	{
		scanf("%d",&data);
		start=addatend(start,data);	
	}
	return start;
}/*End of create_list()*/

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=start;
	printf("List is :\n");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p = p->next;
	}
	printf("\n\n");
}/*End of display() */


struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info = data;
	tmp->next = start;
	start=tmp;
	return start;
}/*End of addatbeg()*/

struct node *addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->next!=NULL)
		p=p->next;
	p->next=tmp;
	tmp->next=NULL;
	return start;
}/*End of addatend()*/

struct node *del(struct node *start,int data)
{
	struct node *tmp,*p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return start;
	}
	/*Deletion of first node*/
	if(start->info==data)
	{
		tmp=start;
		start= start->next;  
		free(tmp);
		return start;
	}
	/*Deletion in between or at the end*/
	p=start;
	while(p->next!=NULL)
	{
		if(p->next->info==data)   
		{
			tmp=p->next;
			p->next=tmp->next;
			free(tmp);
			return start;
		}
		p=p->next;
	}
	printf("Element %d not found\n",data);
	return start;
}/*End of del()*/

