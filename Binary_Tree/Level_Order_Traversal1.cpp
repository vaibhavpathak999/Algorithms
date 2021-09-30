#include <iostream>
using namespace std;

class BstNode {
public:
	int height, data;
	BstNode *left, *right;
};

BstNode* create_node( int data )
{
	BstNode* newNode = new BstNode;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BstNode* insert( BstNode* root, int data )
{
	if ( root == NULL )
	{
		root = create_node(data);
	}
	if ( data < root->data )
	{
		root->left = insert( root->left, data );
	}
	else if ( data>root -> data )
	{
		root->right = insert(root->right, data);
	}
	return root ;
}

int height( BstNode *pt )
{
	int lt, rt;
	if( pt != NULL )
	{
		lt = height( pt->left );
		rt = height( pt->right );
		if( lt > rt )
			return lt+1;
		else
			return rt+1;
	}
}

void print ( BstNode *root, int level )
{
	if ( root == NULL )
		return;
	else if ( level == 1)
		cout<< root->data << " ";
	else if ( level > 1 )
	{
		print( root->left, level-1 );
		print( root->right, level-1 );
	}
}

void level( BstNode *root )
{
	int h = height( root );
	int i;
	for (i=1; i<=h; i++)
	{
		print( root, i );
		cout<< endl;
	}
}



int main()
{
	BstNode *root =NULL;
	char ch ='y';
	int data,h,choice;
	while(ch=='y'|| ch=='y')
	{
		cout<<"Enter 1 to insert an element and 2 to display the level order traversal of BST"<<endl;
		cin>>choice;
		switch( choice )
		{
			case 1:
			   cout << endl << "Enter data value" << endl;
			   cin >> data;
			   root = insert( root, data );
			   break;
			case 2:
			   level( root );
			   break;
			default:
				cout<< "Invalid choice" << endl;

			
		}
		cout << endl << "Do you wanrt to continue (y/n)? " << endl;
		cin >> ch;
	} 
	return 0;      
}