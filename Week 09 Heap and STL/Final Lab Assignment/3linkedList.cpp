#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* nxt;
    Node* prv;
};

class LinkedList
{
public:
    Node* head;
    Node* tail;
    int sz;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    Node *CreateNewNode(int value)
    {
        Node *NewNode =new Node;
        NewNode->value = value;
        NewNode->nxt = NULL;
        NewNode->prv = NULL;
        return NewNode;
    }
    void insertHead(int value)
    {
        sz++;
        Node *NewNode = CreateNewNode(value);
        if(head == NULL)
        {
            head = NewNode;
            tail = NewNode;
            return;
        }
        Node *a = head;
        NewNode->nxt = a;
        a->prv = NewNode;
        head = NewNode;
    }
    void insertTail(int value)
    {
        sz++;
        Node* NewNode = CreateNewNode(value);

        tail->nxt = NewNode;
        tail = NewNode;

    }
    void insertMid(int value)
    {
        if(head == NULL)
        {
            insertHead(value);
            return;
        }
        int mid = sz/2;
        Node* cur = head;
        int cur_idx = 0;
        while(cur_idx != mid-1)
        {
            cur = cur->nxt;
            cur_idx++;

        }
        sz++;
        Node *NewNode = CreateNewNode(value);
        NewNode->nxt = cur->nxt;
        NewNode->prv = cur;
        Node* b = cur->nxt;
        b->prv = NewNode;
        cur->nxt = NewNode;

    }
    void print()
    {
        Node *a = head;
        while(a!=NULL)
        {
            cout<<a->value<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    void Merge(LinkedList b)
    {
        Node* a = tail;
        Node* temp = b.head;
        a->nxt = temp;
        temp->prv = a;
    }
    int getSize()
    {
        return sz;
    }
};
int main()
{
    LinkedList a;
	LinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	a.print(); // prints  0 1 3 5 10

	b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print(); // prints  9 10 30 50 100

	a.Merge(b);
	a.print(); // prints  0 1 3 5 10 9 10 30 50 100
	b.print(); // prints  9 10 30 50 100

}


