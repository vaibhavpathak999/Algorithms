#include <iostream> 

using namespace std; 

struct Node { 
	int data; 
	struct Node* left_child; 
	struct Node* right_child; 
}; 

struct Node* newNode(int data) { 
	Node* node = new Node;
	node->data = data; 
	node->left_child = NULL; 
	node->right_child = NULL; 
	
	return(node); 
} 

void invert_tree(struct Node* node) { 
	if (node == NULL) 
		return; 
	else
	{ 
		struct Node* temp; 
		
		invert_tree(node->left_child); 
		invert_tree(node->right_child); 
	
		temp = node->left_child; 
		node->left_child = node->right_child; 
		node->right_child = temp; 
	} 
} 

void printTree(struct Node* node) 
{ 
	if (node == NULL) 
		return; 
	
	printTree(node->left_child); 
	cout << node->data << " "; 
	printTree(node->right_child); 
} 

 
int main() { 
    
	struct Node *root = newNode(21); 
	root->left_child = newNode(13); 
	root->right_child = newNode(45); 
	root->right_child->left_child = newNode(37); 
	root->right_child->right_child = newNode(59); 
	
	cout << "Inorder traversal: Initial tree ::" << endl; 
	printTree(root); 
	
	invert_tree(root); 
	
	cout << endl;

	cout << "Inorder traversal: Inverted tree :: \n"; 
	printTree(root); 
	
	return 0; 
} 