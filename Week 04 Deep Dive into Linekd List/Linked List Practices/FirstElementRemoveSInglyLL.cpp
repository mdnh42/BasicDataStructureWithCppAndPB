#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* nxt;

};

class LinkedList
{
public:
    node* head;
    LinkedList()
    {
        head = NULL;
    }
    node * CreateNewnode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;

    }

    void Traverse()
    {
        node* a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }


};
int main()
{
    return 0;
}
