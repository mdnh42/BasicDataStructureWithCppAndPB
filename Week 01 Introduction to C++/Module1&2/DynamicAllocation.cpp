#include<bits/stdc++.h>
using namespace std;


int main()
{
    int* x = new int;
    *x = 10;
    cout<<x<<endl;
    cout<<*x<<endl;

    int n;
    cin>>n;
    int *y = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>> x[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<x[i]<<endl;
    }

    delete[] x;
    return 0;
}
