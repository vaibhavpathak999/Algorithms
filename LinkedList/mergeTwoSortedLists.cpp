//Program to merge two sorted linked lists
//Linked List 1 (7->4->3->1)
//Linked List 2 (10->8->2->0)
//Merged Linked list (0 1 2 3 4 7 8 10)
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void push(struct Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *mergeLists(Node *a, Node *b)
{
    //Base case
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    Node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = mergeLists(a->next, b);
    }
    else
    {
        c = b;
        c->next = mergeLists(a, b->next);
    }
    return c;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    push(&head1, 7);
    push(&head1, 4);
    push(&head1, 3);
    push(&head1, 1);
    push(&head2, 10);
    push(&head2, 8);
    push(&head2, 2);
    push(&head2, 0);
    Node *newHead = mergeLists(head1, head2);
    cout << "Merged Linked List: " << endl;
    printList(newHead);
    return 0;
}
