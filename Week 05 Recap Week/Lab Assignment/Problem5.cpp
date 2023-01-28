#include<bits/stdc++.h>
using namespace std;
int Max_Element(vector<int>&a, int n)
{
    if(n==1)
        return a[0];

    return max(a[n-1], Max_Element(a, n-1));
}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int Max = Max_Element(a, n);
    cout<<Max<<"\n";

    return 0;
}
