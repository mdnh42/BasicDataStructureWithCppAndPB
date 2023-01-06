/*
5, 3, 1, 4, 2, 6, 1
a[0]>a[1]
swap(a[0], a[1]
pass-1: 3, 5, 1, 4, 2, 6, 1
        3, 1, 5, 4, 2, 6, 1
        3, 1, 4, 5, 2, 6, 1
        3, 1, 4, 1, 4, 6, 1
        3, 1, 4, 1, 4, 6, 1
        3, 1, 4, 1, 4, 1, 6




*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int pass = 0; pass<n; pass++)
    {
        int last = n-1-pass;
        for(int j=0; j<=last-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
        cout<<"after pass: "<<pass<<" : ";
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    cout<<"After Sorting ";
    for(int i=0; i<n; i++)
        cout<<a[i];
    cout<<"\n";

    return 0;
}
