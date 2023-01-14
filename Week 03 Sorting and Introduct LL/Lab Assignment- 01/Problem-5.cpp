#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
};

class LinkedList
{
public:

    node* head;
    LinkedList()
    {
        head = NULL;
    }
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node * a = CreateNewNode(value);
        if(head==NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    int getSize()
    {
        node* a = head;
        int Count = 0;
        while(a!=NULL)
        {
            Count++;
            a = a->nxt;
        }
        return Count;

    }

    int getValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;

    }

    void printReverse()
    {
        pReverse(head);
        cout<<"\n";
    }

    void pReverse(node * a)
    {
        if(a == NULL)
        {
            return;
        }

        pReverse(a->nxt);
        cout<<a->data<<" ";
    }
    void Traverse()
    {
        node* a =head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    void swapFirst()
    {
        if(getSize()<2)
        {
            return;
        }
        node* first = head;
        node* second = head->nxt;
        first->nxt = head->nxt->nxt;
        second->nxt = first;

        node* temp;
        temp = second;
        second = first;
        first = temp;
        head = first;

    }
};
int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}
