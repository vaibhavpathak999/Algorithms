#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void findKthNodeEnd(struct Node *head, int k)
{
    struct Node *fast_ptr = head;
    struct Node *slow_ptr = head;
    int count = 0;
    if (head != NULL)
    {
        while (count < k)
        {
            if (fast_ptr == NULL)
            {
                cout << k << " is larger than number of nodes in the list";
                return;
            }
            fast_ptr = fast_ptr->next;
            count++;
        }
        if (fast_ptr == NULL)
        {
            head = head->next;
            if (head != NULL)
            {
                cout << k << "th Node from end is " << (slow_ptr->data);
            }
        }
        else
        {
            while (fast_ptr != NULL)
            {
                fast_ptr = fast_ptr->next;
                slow_ptr = slow_ptr->next;
            }
            cout << k << "th Node from end is " << (slow_ptr->data);
        }
    }
}

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main()
{
    struct Node *head = NULL;
    push(&head, 13);
    push(&head, 15);
    push(&head, 20);
    push(&head, 25);
    push(&head, 49);
    findKthNodeEnd(head, 3);
    return 0;
}
