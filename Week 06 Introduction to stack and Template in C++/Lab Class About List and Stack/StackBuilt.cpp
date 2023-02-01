#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Stack
    stack<int>st;
    //Push
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<"\n";
    cout<<st.top()<<"\n";
    // Pop
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    cout<<st.size()<<"\n";

    return 0;
}
