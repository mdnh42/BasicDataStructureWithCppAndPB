
#include<bits/stdc++.h>
using namespace std;
template<class T>
class MaxHeap{
public:
    vector<T>nodes;
    Heap()
    {

    }
    void up_heapify(T idx)
    {
        while(idx>0 && nodes[idx]>nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    void Insert(T x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }
    void PrintHeap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }
    void down_heapify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int l = 2*idx +1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] <nodes[r])
            {
                largest = r;
            }
            if(largest == idx)
            {
                break;
            }
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }
    void Delete(int idx)
    {
        if(idx>=nodes.size())
            return;
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty";
            return -1;
        }
        return nodes[0];
    }
    int ExtractMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;


    }

};

int main()
{
    MaxHeap<int> h;
    h.Insert(4);
    h.Insert(7);
    h.Insert(9);
    h.Insert(1);
    h.Insert(10);
    h.Insert(20);
    h.Insert(30);
    h.PrintHeap();

    h.Delete(0);
    h.PrintHeap();
    cout<<"Max Element "<<h.ExtractMax()<<"\n";
    MaxHeap<char> ch;
    ch.Insert('a');
    ch.Insert('a');
    ch.Insert('c');
    ch.Insert('g');
    ch.Insert('t');
    ch.Insert('g');
    ch.Insert('gh');
    ch.PrintHeap();

    ch.Delete(0);
    ch.PrintHeap();

    return 0;
}
