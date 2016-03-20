#include<stdio.h>
#include<stdlib.h>

struct Node{

	int data;
	struct Node *next;
	struct Node *prev;
};

struct Node* head = NULL;

struct Node* get_new_node(int x){

	struct Node *temp = (struct Node*) malloc ( sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;
	return temp

}

void insert_head(int x){

	struct Node *temp = get_new_node(x);
	
	if(head == NULL){
		head = temp;
		return;
	}

	else{

	}
	
