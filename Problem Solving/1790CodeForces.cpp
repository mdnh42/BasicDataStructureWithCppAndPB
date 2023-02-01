#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stduio(false);
    cin>>tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string PI = "314159265389777777777";
        string s;
        cin>>s;
        int ans =0;
        for(int i=0; i<s.size();i++)
        {
            if(PI[i]==s[i])
            {
                ans++;
            }
            else
                break;
        }
        cout<<ans<<"\n";
    }

    return 0;
}
