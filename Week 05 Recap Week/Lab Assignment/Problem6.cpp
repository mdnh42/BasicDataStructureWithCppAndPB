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
        sz=0;
    }
    //Creates a new node with data = value and nxt= NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
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
        //If head is not NULL
        a->nxt = head;
        head = a;
    }

    //Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    // Return Last Element
    int getLast()
    {
        if(head == NULL)
        {
            return -1;
        }
        node *a = head;
        while(a!=NULL)
        {

            if(a->nxt == NULL)
            {
                return a->data;
            }
            a = a->nxt;
        }
    }
    // Double GEt Average
    double getAverage()
    {
        node * a = head;
        int sum = 0;

        while(a != NULL)
        {
            sum += a->data;
            a = a->nxt;
        }
        double avg = (double)sum / sz;
        return avg;
    }
};
int main()
{
    //Get Last Element
    LinkedList l;
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(6);
    l.InsertAtHead(2);
    l.InsertAtHead(3);
    l.Traverse();

    cout<<l.getLast()<<"\n";

    //Get Average Value
    LinkedList l2;
    l2.InsertAtHead(7);
    l2.InsertAtHead(4);
    l2.InsertAtHead(6);
    l2.InsertAtHead(2);
    l2.InsertAtHead(3);
    l2.Traverse();
    cout<<l2.getAverage()<<"\n";
    return 0;
}
