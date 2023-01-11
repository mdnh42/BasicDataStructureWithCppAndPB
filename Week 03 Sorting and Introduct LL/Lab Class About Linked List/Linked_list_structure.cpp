#include<bits/stdc++.h>
using namespace std; 

class node{
public:
    int data; 
    node * nxt; 

};

class LinkedList
{
public:
    node * head; 
    LinkedList()
    {
        head = NULL;
    }
    // Create a new node with data = value and nxt = Null;
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value; 
        newnode->nxt = NULL;
        return newnode;
    }
    // Insert new value at head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a; 
            return; 
        }
        //if head is not NULL 
        a->nxt = head; 
        head = a; 
    }
    // Prints the linked list
    void Traverse()
    {
        
    }
    // Search for a single Value 
    void SearchDistinctValue()
    {

    }
    // Search all possible occurance 
    void SearchAllValue()
    {

    }
};

int main()
{
    LinkedList l; 
    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    l.Traverse();

    l.SearchDistinctValue(10);
    
    l.SearchDistinctValue(5);

    l.SearchAllValue(10);

    return 0; 
}