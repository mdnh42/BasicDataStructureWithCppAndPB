#include<bits/stdc++.h>
using namespace std;
template<class T>
class node
{
public:
    T data;
    node *prv;
    node* nxt;

};
template <class T>
class DoublyLinkedList
{
public:
    node<T> * head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    //Create a new node with the given data and return it O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> * newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    //Insert a node with given data head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node <T> *newnode = CreateNewNode(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    //DeleteAthead  O(1)
    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }
    int getSize()
    {
        return sz;
    }

};
//Stack using doubly linkedlist
template<class T>
class Stack
{
public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }
    T top ()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }
    void push(T val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
    int getSize()
    {
        return dl.getSize();
    }

};
int main()
{

    Stack<int>a;
    a.push(4);
    a.push(6);
    a.push(3);
    a.push(7);

    Stack<int>temp;
    while(a.getSize()>0)
    {
        temp.push(a.top());
        a.pop();
    }
    swap(a, temp);

    while(a.getSize()>0)
    {
        cout<<a.top()<<"\n";
        a.pop();
    }
    return 0;
}

