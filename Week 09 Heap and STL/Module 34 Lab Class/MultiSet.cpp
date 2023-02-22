#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>a;
    a.insert(5);
    a.insert(5);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);

    for(auto i : a)
    {
        cout<<i<<" ";
    }
    cout<<"\n";

//    size o(1)
    cout<<"Size : "<<a.size()<<"\n";


//  Erase all Occurance o(logn)
    a.erase(4);
    for(auto i : a)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
//  Erase a single Occurace
    a.erase(a.find(7));
    for(auto i : a)
    {
        cout<<i<<" ";
    }
    cout<<"\n";

    // Find O(logn)
    if(a.find(5) != a.end())
    {
        cout<<"Exist\n";
    }
    else
    {
        cout<<"Not Exist";
    }


    return 0;
}
