#include<bits/stdc++.h>
using namespace std; 
int main()
{

    list<int> l; 
    l.push_back(40);
    l.push_back(20);
    l.push_front(30);

    // cout<<l.back();
    // cout<<l.front()<<"\n";; 

    // l.pop_front(); 
    // // cout<<l.front() << "\n";

    // for(auto it = l.begin(); it!=l.end(); it++)
    // {
    //     cout<< *it <<" ";
    // }
    l.sort();

    for(auto it= l.begin(); it!=l.end(); it++)
    {
        cout<< *it << " ";
    }
}