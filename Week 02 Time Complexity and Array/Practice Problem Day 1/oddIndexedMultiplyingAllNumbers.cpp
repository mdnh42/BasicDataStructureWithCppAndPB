
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
    int pro= 1;
    for(int i= 1; i<=n; i++)
    {
        if(i%2 == 0)
            pro *= i;


    }

    cout<<pro<<"\n";

    return 0;
}
