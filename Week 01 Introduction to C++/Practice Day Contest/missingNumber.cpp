#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin>>n;
    vector<int>a;
    a.resize(n);

    for(int i=1; i<n; i++)
    {
        cin>>x;
        a[x] = 1;
    }

    for(int i=1; i<=n; i++)
    {
        if(a[i] == 0)
        {
            cout<<i<<"\n";
            break;
        }

    }

    return 0;
}
