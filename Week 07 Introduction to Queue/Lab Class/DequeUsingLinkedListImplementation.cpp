#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* prv;
    node* nxt;

};
class Deque{
public:
    node* head;
    node* tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    //pushback o(1)
    void push_back(int value)
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

    // pushfront o(1)
    void push_front(int value)
    {
        node* newnode = CreateNewNode(value);
        if(sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }

    // popback o(1)
    void pop_back()
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
    void pop_front()
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
    // front o(1)
    int front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return head->data;
    }
    // back o(1)
    int back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return tail->data;
    }

};
int main()
{
    Deque d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);

    cout<<"back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.push_front(20);
    cout<<"back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_front();
    cout<<"back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_back();
    cout<<"back : "<<d.back()<<" Front : "<<d.front()<<"\n";
    return 0;
}
