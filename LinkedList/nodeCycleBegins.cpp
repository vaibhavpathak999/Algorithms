//Program to find the start of the cycle in the linked list cycle
//Output: will be the data of the node from where the cycle begins in the linked list
//Floyd's cycle algorithm
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

Node *detectCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            slow = head;
            if (slow == fast)
            {
                return slow;
            }
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
                if (slow == fast)
                {
                    return slow;
                }
            }
        }
    }
    return NULL;
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
    Node *cycleStart = detectCycle(head);
    if (cycleStart != NULL)
    {
        cout << "The cycle starts at node data " << cycleStart->data << endl;
    }
    else
    {
        cout << "The linked list is not having the cycle" << endl;
    }
    return 0;
}
