#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin>>n1;
    int a[n1];

    for(int i=0; i<n1; i++)
        cin>>a[i];

    int n2;
    cin>>n2;
    int b[n2];

    for(int i=0; i<n2; i++)
        cin>>b[i];

    for(int i=0; i<n1; i++)
    {
        cout<<a[i]<<" ";
    }
    int flag;
    for(int j=0; j<n2; j++)
    {
        flag = 0;
        for(int i=0; i<n1; i++)
        {
            if(a[i]==b[j])
            {
                flag =1;
                break;
            }
        }
        if(flag!=1)
        {
            cout<<b[j]<<" ";
        }
    }

    return 0;
}
