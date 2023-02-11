#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* prv;
    node* nxt;

};
class Deque
{
public:
    node* head;
    node* tail;
    int sz;
    int rev;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev = 0;
    }

    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    void InsertAtTail(int value)
    {
        node* newnode = CreateNewNode(value);
        if(sz ==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }
    void InsertAtHead(int value)
    {
        node* newnode = CreateNewNode(value);
        if(sz ==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }
    //pushback o(1)
    void push_back(int value)
    {
        if(rev == 0)
        {
            InsertAtTail(value);
        }
        else{
            InsertAtHead(value);
        }
    }

    // pushfront o(1)
    void push_front(int value)
    {
        if(rev == 0)
        {
            InsertAtHead(value);
        }
        else{
            InsertAtTail(value);
        }
    }
    void DeleteLast()
    {
        if(sz == 0)
        {
            cout<<"Deque is Empty\n";
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node *a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }
    void DeleteFirst()
    {
        if(sz == 0)
        {
            cout<<"Deque is Empty\n";
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node *a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
    }
    // popback o(1)
    void pop_back()
    {
        if(rev==0)
        {
            DeleteLast();
        }
        else{
            DeleteFirst();
        }
    }
    void pop_front()
    {
        if(rev==0)
        {
            DeleteFirst();
        }
        else{
            DeleteLast();
        }
    }
    // front o(1)
    int front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        if(rev ==0)
        {
            return head->data;
        }
        else
        {
            return tail->data;
        }
    }
    // back o(1)
    int back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        if(rev==0)
        {
            return tail->data;
        }
        else{
            return head->data;
        }

    }
    void reverse_deque()
    {
        if(rev ==0)
        {
            rev =1;
        }
        else
        {
            rev = 0;
        }
    }

};
int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    d.push_front(20);
    d.reverse_deque();

    cout<<"back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.push_front(20);
    cout<<"back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_back();
    cout<<"back : "<<d.back()<<" Front : "<<d.front()<<"\n";


    return 0;
}