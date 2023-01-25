#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* nxt;
};

class LinkedList{
public:
    node * head;
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

    // Delete At Head
    void RemoveFirstElement()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        head = a->nxt;
        delete a;
    }

    void RemoveLastElement()
    {
        if(head!=NULL)
        {
            if(head->nxt == NULL)
            {
                head = NULL; 
            }
            else
            {
                node* temp = head; 
                while(temp->nxt->nxt != NULL)
                {
                    temp = temp->nxt; 
                }
                node* lastnode = temp ->nxt; 
                temp->nxt = NULL; 
                free(lastnode);
            }
        }
    }

    void FindIndex(int value)
    {
        node *a = head; 
        int index = 0; 
        while(a!=NULL)
        {
            if(index == value)
            {
                cout<<a->data<<"\n";
            }
            a =a->nxt; 
            index++;
        }
        
    }
    void InsertAtNull(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        node* last = head; 
        while(last->nxt!=NULL)
        {
            last = last->nxt; 
        }
        last->nxt = a; 

    }

};

int main()
{
    LinkedList l;

    l.InsertAtHead(5);
    l.Traverse();
    l.InsertAtHead(4);
    l.Traverse();
    l.InsertAtHead(3);
    l.Traverse();
    l.InsertAtHead(2);
    l.Traverse();
    l.InsertAtHead(1);
    l.Traverse();
    l.InsertAtHead(0);

    l.Traverse();

    l.RemoveFirstElement();

    l.Traverse();

    l.RemoveLastElement();
    l.Traverse();

    l.FindIndex(2);

    l.Traverse();

    cout<<"Last Add"; 
    l.InsertAtNull(6);
    l.Traverse();

    return 0;
}
