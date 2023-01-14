#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    vector<int>a(n);
    int sum = 0;
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
        sum +=a[i];
    }
    int temp = (n*(n+1))/2;
    int missing = temp-sum;
    cout<<missing<<"\n";

    return 0;
}
