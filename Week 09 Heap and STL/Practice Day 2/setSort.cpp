
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>a(n);

    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);

    for(int i=0; i<m;i++)
    {
        cin>>b[i];
    }

    set<int> st;

    for(int i=0; i<n; i++)
    {
        st.insert(a[i]);
    }
    for(int i=0; i<m; i++)
    {
        st.insert(b[i]);
    }


    for(auto it :st)
    {
        cout<<it<<" ";
    }
    return 0;
}

