#include<stdio.h>
#include<stdlib.h>

struct stack{
	int top;
	int size;
	int * arr;
};
int i=0;
int isFull(struct stack* ptr){
	if(ptr->top == ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
	}
	
int isEmpty(struct stack* ptr){
	
	if(ptr->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct stack* ptr,int val){
	if(isFull(ptr)){
		printf("Stack Overflow! The element %d has not been inserted in stack\n",val);
	}
	else{
	i++;
	ptr->top++;
	ptr->arr[ptr->top]	= val;
	}
	
}
int pop(struct stack* ptr){
	if(isEmpty(ptr)){
		printf("Stack Underflow\n");
		return -1;
	}
	else{
		i--;
		int temp;
		temp =  ptr->arr[ptr->top];
		ptr->top--;
		return temp;
	}
}

//int peek(struct stack* s, int i){
//	if(s->top-i+1<0){
//		printf("Invalid entry\n");
//	}
//	else{
//		return s->arr[s->top-i+1];
//	}
//}

void display(struct stack *s){
	i--;
	printf("\nThe Elements in the stack is\n");
	while(i>=0){
		printf("%d\n",s->arr[i]);
		i--;
	}
}

int main(){
	int j,choice,val,n,i;
	struct stack *s;
	s = (struct stack*)malloc(sizeof(struct stack));
	s->size = 10;
	s->top = -1;
	s->arr = (int*)malloc(s->size*sizeof(int));
	printf("Size of your stack is %d\n",s->size);
	while(1){
		printf("\nEnter your choice: ");
		printf("\n1. Push()");
		printf("\n2. Pop()");
		printf("\n3. Display()");
		printf("\n4. Exit()");
		printf("\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter the value for pushing into stack: ");
				scanf("%d",&val);
				push(s,val);
				break;
			case 2:
				printf("Popped Element from the stack is %d\n",pop(s));
				break;
			case 3:
				display(s);
				break;
			case 4:
				exit(1);
				break;
		}
	}




	return 0;
}
