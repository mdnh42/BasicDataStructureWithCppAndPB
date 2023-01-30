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

};
int main()
{

    cout<<"Double \n";
    Stack<double>db;
    db.push(3.5);
    db.push(3.6);
    db.push(3.7);
    db.pop();
    cout<<db.top()<<"\n";
    db.pop();
    cout<<db.top()<<"\n";
    db.pop();
    cout<<db.top()<<"\n";
    db.pop();

    cout<<"Char \n";
    Stack<char>ch;
    ch.push('a');
    ch.push('c');
    ch.push('d');
    cout<<ch.top()<<"\n";
    ch.pop();
    cout<<ch.top()<<"\n";
    ch.pop();
    cout<<ch.top()<<"\n";
    ch.pop();


    cout<<"String \n";
    Stack<string>str;
    str.push("Hi I am NUr Hasan");
    str.push("I learn C++");
    str.push("I am also know C Programming");
    cout<<str.top()<<"\n";
    str.pop();
    cout<<str.top()<<"\n";
    str.pop();
    cout<<str.top()<<"\n";
    str.pop();
    cout<<str.top()<<"\n";
    return 0;
}
