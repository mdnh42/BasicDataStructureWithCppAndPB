#include<bits/stdc++.h>
using namespace std;


class Queue
{
public:
    int *a;
    int array_cap;
    int l,r;
    int sz;
    Queue()
    {
        a = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz =0;
    }
    void remove_circular()
    {
        if(l>r)
        {
            int *temp = new int[array_cap];
            int idx = 0;
            for(int i=1; i<array_cap; i++)
            {
                temp[idx] = a[i];
            }
            for(int i=0; i<=r; i++)
            {
                temp[idx] = a[i];
                idx++;
            }
            swap(temp, a);
            l=0;
            r = array_cap - 1;
            delete [] temp;
        }
    }
    void increase_size()
    {
        remove_circular();
        int *temp = new int[array_cap*2];
        for(int i=0; i<array_cap; i++)
        {
            temp[i] = a[i];

        }
        swap(a, temp);
        array_cap = array_cap*2;
        delete []temp;
    }
    // O(1)
    void enqueue(int value)
    {
        if(sz == array_cap)
        {
            increase_size();
        }
        r++;
        a[r] = value;
    }
    //O(1)
    void dequeue()
    {
        if(l>r)
        {
            cout<<"Queus is empty\n";
            return;
        }
        l++;
    }
    // O(1)
    int front()
    {
        if(l>r)
        {
            cout<<"Queus is emtpy\n";
            return -1;
        }
        return a[l];
    }
    //O(1)
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


