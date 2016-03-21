#include<stdio.h>
#include<stdlib.h>



struct Node{
	int data;
	struct Node *left;
	struct Node *right; 

};

struct Node* get_new_node(int x){

	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp;

}

struct Node* insert(struct Node *root, int  x){


	if (root == NULL){
		root = get_new_node(x);
	}
	else if(x <= root->data){
		root->left = insert(root->left,x); 
	}
	else{
		root->right = insert(root->right,x); 
	}
	return root;
}


int search(struct Node *root, int x){
	if (root == NULL) return 0;
	else if (root->data == x) return 1;
	else if (x <= root->data) return search (root->left,x);
	else return search (root->right,x);	
	}



int main(){

	struct Node *root = NULL;
	root = insert(root,24);
	root = insert(root,21);
	root = insert(root,36);
	root = insert(root,20);
	root = insert(root,22);
	root = insert(root,31);
	root = insert(root,37);


	int a = search(root, 999999936);
	
	if(a==1) printf("Found");
	else printf("Not Found");
}

