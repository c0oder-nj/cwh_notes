#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node* left;
	int data;
	struct node* right;
};

struct node* createNode(int data){
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
int main(){
	struct node* root = createNode(7);
	struct node* n1 = createNode(11);
	struct node* n2 = createNode(12);
	/*
	root = (struct node*)malloc(sizeof(struct node));
	root->left = NULL;
	root->right = NULL;
	root->data = 7;
	
	struct node* n2;
	n2 = (struct node*)malloc(sizeof(struct node));
	n2->left = NULL;
	n2->right = NULL;
	n2->data = 4;
	
	struct node* n3;
	n3 = (struct node*)malloc(sizeof(struct node));
	n3->left = NULL;
	n3->right = NULL;
	n3->data = 11;
	
	 */
	//Linking of nodes
	root->left = n1;
	root->right = n2;
	return 0;
}
