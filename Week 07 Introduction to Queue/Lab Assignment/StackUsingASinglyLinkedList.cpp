#include<bits/stdc++.h>
using namespace std;
template<class T>
class node
{
public:
    T data;
    node<T> * nxt;
};
template<class T>
class LinkedList
{
public:
    node<T> * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }
    node<T>* CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data =value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(T value)
    {
        sz++;
        node<T> *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->nxt;
        delete a;
    }
    int getSize()
    {
        return sz;
    }
};
template<class T>
class Stack
{
public:
    LinkedList<T> l;
    Stack()
    {
    }
    T top()
    {
        if(l.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return l.head->data;
    }
    void push(T val)
    {
        l.InsertAtHead(val);
    }
    void pop()
    {
        if(l.getSize()==0)
        {
            cout<<"Stack is empty\n";
            return;
        }
        l.DeleteAtHead();
    }
};
int main()
{
    Stack<int> st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(5);
    cout<<st.top()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    Stack<char> ct;
    ct.push('A');
    cout<<ct.top()<<"\n";
    ct.push('B');
    cout<<ct.top()<<"\n";
    ct.push('C');
    cout<<ct.top()<<"\n";

    ct.pop();
    cout<<ct.top()<<"\n";
    ct.pop();
    cout<<ct.top()<<"\n";
    ct.pop();
    cout<<ct.top()<<"\n";

    Stack<double> dt;
    dt.push(30.30);
    cout<<dt.top()<<"\n";
    dt.push(10.20);
    cout<<dt.top()<<"\n";
    dt.push(20.20);
    cout<<dt.top()<<"\n";

    dt.pop();
    cout<<dt.top()<<"\n";
    dt.pop();
    cout<<dt.top()<<"\n";
    dt.pop();
    cout<<dt.top()<<"\n";

    return 0;
}

