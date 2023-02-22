
#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int>nodes;
    Heap()
    {

    }
    void up_heapify(int idx)
    {
        while(idx>0 && nodes[idx]>nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    void Insert(int x)
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
            if(l<nodes.size() && nodes[largest] > nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] > nodes[r])
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
    void Build_From_Array(vector<int>&a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n/2-1;

        for(int i = last_non_leaf; i>=0; i--)
        {
            down_heapify(i);
        }
    }



};
vector<int> heap_sort(vector<int>a)
    {
        MaxHeap h;
        h.Build_From_Array(a);
        vector<int>ans;
        for(int i=0; i<a.size(); i++)
        {
            ans.push_back(h.ExtractMax());
        }
        return ans;
    }
int main()
{
    vector<int>a  = {1,2, 3,4,10,9,5,7};


    vector<int>sorted_a = heap_sort(a);
    for(int i=0; i<sorted_a.size();i++)
    {
        cout<<sorted_a[i]<<" ";
    }
//    MaxHeap<int> h;
//    vector<int> a = {1,2, 3,4,10,9,5,7};
//    h.Build_From_Array(a);
//    h.PrintHeap();
//    h.ExtractMax();
//    h.PrintHeap();

//    h.Insert(4);
//    h.Insert(7);
//    h.Insert(9);
//    h.Insert(1);
//    h.Insert(10);
//    h.Insert(20);
//    h.Insert(30);
//    h.PrintHeap();
//
//    h.Delete(0);
//    h.PrintHeap();
//    cout<<"Max Element "<<h.ExtractMax()<<"\n";
//    MaxHeap<char> ch;
//    ch.Insert('a');
//    ch.Insert('a');
//    ch.Insert('c');
//    ch.Insert('g');
//    ch.Insert('t');
//    ch.Insert('g');
//    ch.Insert('gh');
//    ch.PrintHeap();
//
//    ch.Delete(0);
//    ch.PrintHeap();

    return 0;
}
