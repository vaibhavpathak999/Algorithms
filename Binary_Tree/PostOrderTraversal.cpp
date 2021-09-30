#include <iostream>
using namespace std;
 
struct Node {
    int data;
    struct Node *left_child, *right_child;
    Node(int data)
    {
        this->data = data;
        left_child = right_child = NULL;
    }
};

void postOrderTraversal_Print(struct Node* node) {
    if (node == NULL)
        return;
 
    postOrderTraversal_Print(node->left_child);
 
    postOrderTraversal_Print(node->right_child);
 
    cout << node->data << " ";
}

int main() {

    struct Node* root = new Node(15);
    root->left_child = new Node(21);
    root->right_child = new Node(35);
    root->left_child->left_child = new Node(42);
    root->left_child->right_child = new Node(59);

 
    cout << "\nPostorder traversal : \n";
    postOrderTraversal_Print(root);
 
    return 0;
}