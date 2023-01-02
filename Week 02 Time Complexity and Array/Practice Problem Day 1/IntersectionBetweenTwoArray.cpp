// WAP that takes 2 integer arrays as input, then computes the intersection of the two arrays.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];


    for(int i=0; i<n; i++)
        cin>>a[i];

    int n2;
    cin>>n2;
    int b[n2];

    for(int i=0; i<n2; i++)
        cin>>b[i];



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(a[i] == b[j])
            {
                cout<<a[i]<<" ";

            }
        }
    }



    return 0;
}
