//Program to detect cycle in any linked list
//Floyd's cycle
//Output: true if the cycle is present in the linked list
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

bool detectCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node *head = NULL;
    push(&head, 7);
    Node *tail = head;
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    Node *start = head->next->next;
    tail->next = start;
    bool result = detectCycle(head);
    if (result == true)
    {
        cout << "Linked list is having a cycle" << endl;
    }
    else
    {
        cout << "Linked list is not having a cycle" << endl;
    }
    return 0;
}
