#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};

Node *createnode(int item) 
{ 
    Node *temp =  new(Node);
    temp->data = item; 
    temp->left = temp->right = NULL; 
    
    return temp; 
} 

Node * insert(Node *node,int key){
	
	if(node == NULL){
		return createnode(key);
	}
	if(key < node->data){
		node->left = insert(node->left,key);
	}else{
		node->right = insert(node->right,key);
	}
	
	return node;
	
}

void inorder(Node * root){
	
	if(root != NULL){
		
		inorder(root->left);
		cout << root->data << ",";
		inorder(root->right);
	}
}
int main(){
	Node * root = createnode(50);
	insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80);
	
	inorder(root);
	
	return 0;
}
