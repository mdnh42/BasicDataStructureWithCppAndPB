#include<bits/stdc++.h>
using namespace std;

int sumArray(vector<int>a ,int n)
{
    if(n<=0)
    {
        return 0;
    }

    return (sumArray(a, n-1) + a[n-1]);


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
    cout<<sumArray(a, n)<<"\n";
    return 0;
}
