#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
public:
    int data;
    node<T>* prv;
    node<T>* nxt;
};
template<class T>
class Deque{
public:
    node<T>* head;
    node<T>* tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz =0;
    }

    node<T>* CreateNewNode(T value)
    {
        node<T>* newnode = new node<T>;
        newnode->data = value;
        newnode->prv = NULL;
        newnode->nxt = NULL;
        return newnode;
    }

    void push_back(T value)
    {
        node<T>* newnode = CreateNewNode(value);
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

    void push_front(T value)
    {
        node<T>* newnode = CreateNewNode(value);
        if(sz==0)
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
    void pop_back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T>* a = tail;
        tail = tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }
    void pop_front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T>* a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
    }

    T front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return head->data;
    }

    T back()
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
    // Integer Example
    Deque<int> d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);

    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.push_front(20);
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_front();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";
    d.pop_back();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    // Char Example
    Deque<char> cd;
    cd.push_back('B');
    cd.push_back('C');
    cd.push_back('D');

    cout<<"Back : "<<cd.back()<<" Front : "<<cd.front()<<"\n";

    cd.push_front('A');
    cout<<"Back : "<<cd.back()<<" Front : "<<cd.front()<<"\n";

    cd.pop_front();
    cout<<"Back : "<<cd.back()<<" Front : "<<cd.front()<<"\n";
    cd.pop_back();
    cout<<"Back : "<<cd.back()<<" Front : "<<cd.front()<<"\n";



    return 0;
}
