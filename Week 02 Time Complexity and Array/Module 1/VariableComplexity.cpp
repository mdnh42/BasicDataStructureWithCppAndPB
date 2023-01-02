#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    a.resize(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int maxi = a[0];
    int mini = a[0];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        sum = sum + a[i];
    }

    cout<<maxi<<"\n";
    cout<<mini<<"\n";
    cout<<sum<<"\n";
    return 0;
}
