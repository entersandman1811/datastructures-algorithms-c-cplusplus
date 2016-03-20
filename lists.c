# include<stdio.h>
#include<stdlib.h>

struct Node{

	int data;
	struct Node *next; 
};


struct Node *head;


void insert(int x){
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;
	
}

void print(){
	struct Node *temp;
	temp = head;
	printf("\n ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;	
	}

}




void delete(int n){

	struct Node *temp = head;
	int i;	
	for(i=0; i<n-1;i++){
                        temp= temp->next;
                }
	struct Node *temp2= temp->next;
	temp->next = temp2->next;

}
void insert_at_n(int x, int n){

	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	struct Node *temp2 = head;

	if(n==0){
		temp->data =x;
		temp->next = head;
		head = temp;
	}

	else{
		int i;
		for(i=0; i<n-1;i++){
			temp2= temp2->next; 
		}
		temp->data =x;
		temp->next = temp2->next;
		temp2->next = temp;
	}
}




int main(){

	head = NULL;

	insert(2);
	insert(3);
	insert(4);
	insert (222);		
	print();
	printf("\n");

	delete(2);
	print();


}

