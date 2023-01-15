
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * nxt;
};
class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // Creates a new node with node = value and nxt = NULL;
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data =value;
        newnode->nxt = NULL;
        return newnode;
    }
    // Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not Null
        a->nxt = head;
        head = a;
    }
    //Prints the linked list
    void Traverse()
    {
        node*  a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    //Search for a single value;
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a= a->nxt;
            index++;
        }
        return -1;
    }
    //Search for all Possible occurrence
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is found at ndex"<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }
    }
    int getSize()
    {
        return sz;
        /*
        O(n)
        int sz = 0;
        node *a = head;
        while(a!=NULL)
        {
            sz++;
            a = a->nxt;
        }
        return sz;
        */
    }
    void InsertAtAnyIndex(int index, int value)
    {
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
        if(index<0 || index>sz)
        {
            return;
        }

    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(20);

    cout<<l.getSize()<<"\n";

    l.InsertAtAnyIndex(1, 100);
    l.Traverse();

    l.InsertAtAnyIndex(4, 200);
    l.Traverse();
    cout<<l.getSize()<<"\n";
    return 0;
}

