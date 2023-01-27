#include <bits/stdc++.h>
using namespace std;
struct Node {
public:
    int data;
    struct Node* next;
    struct Node* prev;
};

void deleteNode(struct Node** head, struct Node* curr)
{


}

/* Using this function we will delete all nodes from linked list having data equal to X */
void removeXoccurrences(struct Node** head, int X)
{
    if ((*head) == NULL)
        return;

    struct Node* curr = *head;
    struct Node* next;

    while (curr != NULL) {
        if (curr->data == X) {
            next = curr->next;
            deleteNode(head, curr);
            curr = next;
        }
        else
            curr = curr->next;
    }
}

/* Using this function we will insert a node at the beginning of List */
void push(struct Node** head, int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = (*head);

    if ((*head) != NULL)
        (*head)->prev = new_node;

    (*head) = new_node;
}

/* Printing linked list */
void printList(struct Node* head)
{
    if (head == NULL)
        cout << "Doubly Linked list empty";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    struct Node* head = NULL;
    push(&head, 2);
    push(&head, 2);
    push(&head, 5);
    push(&head, 2);
    push(&head, 2);

    cout << "Original Doubly linked list before deletion: ";
    printList(head);

    int X = 2;
    removeXoccurrences(&head, X);

    cout << "\nDoubly linked list after deletion of all occurrences of "
        << X << ": ";
    printList(head);

    return 0;
}

