#include<bits/stdc++.h>
using namespace std;
template<class T>
const T MAX_SIZE = 500;
class Queue
{
public:
    T a[MAX_SIZE];
    int l,r;
    int sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    //O(1)
    void enqueue(T value)
    {
        if(sz==MAX_SIZE)
        {
            cout<<"Queue is full!\n";
            return;
        }
        r++;
        if(r == MAX_SIZE)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }
    //O(1)
    void dequeue()
    {
        if(sz==0)
        {
            cout<<"QUeue is empty\n";
            return;
        }
        l++;
        if(l==MAX_SIZE)
        {
            l =0;
        }
        sz--;
    }
    //O(1)
    int front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];

    }
    int size()
    {
        return r-l+1;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(5);

    cout<<"Q Size: "<<q.size()<<"\n";
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<q.size()<<"\n";

    return 0;
}

