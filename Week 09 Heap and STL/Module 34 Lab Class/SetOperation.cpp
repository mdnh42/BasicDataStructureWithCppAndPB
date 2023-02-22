#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>st;
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);
//    o(logn)
    cout<<"Printing Set\n";
//    O(n)
    for(auto i :st)
        cout<<i<<" ";
    cout<<"\n";
    cout<<st.size()<<"\n";
    cout<<"Printing Set\n";
//    O(n)
    for(auto it = st.begin(); it!= st.end(); it++)
    {
        cout<<*it<< " ";
    }
    cout<<"\n";
//    o(logn)
    st.erase(5);
    for(auto i:st)
    {
        cout<<i<<" ";
    }
    cout<<"\n";


    st.erase(8);
    for(auto i:st)
    {
        cout<<i<<" ";
    }
    cout<<"\n";


    if(st.find(5) != st.end())
    {
        cout<<" 7 Found \n";
    }
    else
        cout<< " False";

    return 0;
}
