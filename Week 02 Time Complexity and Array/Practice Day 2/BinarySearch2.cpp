
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int low = 0, high = n-1;
    bool flag = 0;
    while(low<=high)
    {
        int q;
        cin>>q;
        vector<int>k(q);
        for(int i=0; i<q; i++)
            cin>>k[i];

        for(int i=0; i<q; i++)
        {
            int mid = (low+high)/2;

            if(a[mid] == k[i])
            {
                cout<<"YES "<<mid<<"\n";
                flag = 1;
                break;
            }
            if(a[mid]>k[i])
            {
                high = mid - 1;
            }
            else
            {
                //a[mid] <k
                low = mid+1;
            }

        }
        if(flag==0)
            cout<<"NO"<<"\n";

    }


    return 0;
}
