#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    Node *left, *right;
};
 
struct Node* createNode(int item)
{
    Node* temp = new Node;
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
 
    return temp;
}
 
void NthPostordernode(struct Node* root, int N)
{
    static int flag = 0;
 
    if (root == NULL)
        return;
 
    if (flag <= N) {
        NthPostordernode(root->left, N);
        NthPostordernode(root->right, N);
        flag++;
        if (flag == N)
            cout << root->data;
    }
}

int main()
{
    struct Node* root = createNode(25);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(18);
    root->left->right = createNode(22);
    root->right->left = createNode(24);
    root->right->right = createNode(32);
 
    int N = 6;
 
    // prints n-th node found
    NthPostordernode(root, N);
 
    return 0;
}
