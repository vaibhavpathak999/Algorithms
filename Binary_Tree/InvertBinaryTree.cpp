#include <iostream> 
using namespace std; 


struct Node 
{ 
	int data; 
	struct Node* left; 
	struct Node* right; 
}; 


struct Node* newNode(int data) 
{ 
	Node* node = new Node;
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	
	return(node); 
} 

void invert(struct Node* node) 
{ 
	if (node == NULL) 
		return; 
	else
	{ 
		struct Node* temp; 
		
		/* recursive calls */
		invert(node->left); 
		invert(node->right); 
	
		/* Swapping left and right nodes */
		temp = node->left; 
		node->left = node->right; 
		node->right = temp; 
	} 
} 

/* print InOrder binary tree traversal.*/
void display(struct Node* node) 
{ 
	if (node == NULL) 
		return; 
	
	display(node->left); 
	cout << node->data << " "; 
	display(node->right); 
} 

 
int main() 
{ 
	struct Node *root = newNode(10); 
	root->left = newNode(3); 
	root->right = newNode(6); 
	root->left->left = newNode(1); 
	root->left->right = newNode(2); 
	
	cout << "Inorder traversal of the constructed tree:" << endl; 
	display(root); 
	
	/* Inverting the tree */
	invert(root); 
	
	cout << endl;

	cout << "Inorder traversal of the inverted tree:" <<endl; 
	display(root); 
	
	return 0; 
} 