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
    int k;
    cin>>k;
    int low = 0, high = n-1;
    int Count =0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid] == k)
        {
            Count++;
        }
        if(a[mid]>k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid+1;
        }
    }
    if(Count>1)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

/*
7
1 3 4 6 6 9 17
6



10
1 2 3 4 5 6 7 8 9 10
5

*/
