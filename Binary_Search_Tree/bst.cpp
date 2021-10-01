//verify if algo is Binary search tree or not 
int isBST(struct node* node)
{
if (node == NULL)
	return 1;
	
if (node->left != NULL && node->left->data > node->data)
	return 0;
	

if (node->right != NULL && node->right->data < node->data)
	return 0;

if (!isBST(node->left) || !isBST(node->right))
	return 0;
	

return 1;
}



