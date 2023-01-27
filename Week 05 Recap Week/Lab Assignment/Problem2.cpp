#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int j = 0;
    for(int i=1; i<n; i++)
    {
        if(a[i] != a[i-1])
        {
          a[++j]=a[i];
        }
    }

    for(int i=0; i<=j; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

