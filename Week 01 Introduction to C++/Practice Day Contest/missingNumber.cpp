#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    vector<int>a(n);

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
