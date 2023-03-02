#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;
class Queue{
public:
    int a [MAX_SIZE];
    int l,r ;
    Queue()
    {
        l = 0;
        r = -1;
    }
    void Enqueue(int value)
    {
        if(r+1>=MAX_SIZE)
        {
            cout<<"Queue is FULL\n";
            return;
        }
        r++;
        a[r] = value;
    }
    void Dequeue()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
    }
    int Front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    int Size()
    {
        return r-l+1;
    }
};
int main()
{
    Queue Q;
    Q.Enqueue(5);
    Q.Enqueue(6);
    Q.Enqueue(7);

    cout<<"Queue Size: "<<Q.Size()<<"\n";
    cout<<Q.Front()<<"\n";
    Q.Dequeue();
    cout<<Q.Front()<<"\n";
    Q.Dequeue();
    cout<<Q.Front()<<"\n";
    cout<<"Queue Size: "<<Q.Size()<<"\n";
    return 0;
}
