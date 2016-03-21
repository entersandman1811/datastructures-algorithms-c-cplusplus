#include<iostream>
#include<queue>
using namespace std;


struct Node{
	int data;
	Node *left;
	Node *right; 

};

Node* get_new_node(int x){

	Node *temp = new Node();
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp;

}

Node* insert( Node *root, int  x){


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


int search( Node *root, int x){
	if (root == NULL) return 0;
	else if (root->data == x) return 1;
	else if (x <= root->data) return search (root->left,x);
	else return search (root->right,x);	
	}

void level_order(Node* root){
	if (root== NULL) return;
	queue<Node*> Q;
	Q.push(root);
	while(!Q.empty()){
		Node* current = Q.front();
		cout<< " " << current->data;
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
		Q.pop();
	}
		
	
}


int main(){

	Node *root = NULL;
	root = insert(root,24);
	root = insert(root,21);
	root = insert(root,36);
	root = insert(root,20);
	root = insert(root,22);
	root = insert(root,31);
	root = insert(root,37);


	int a = search(root, 22);
	
	if(a==1) cout << "Found";
	else cout << "Not Found";

	level_order(root);

}
