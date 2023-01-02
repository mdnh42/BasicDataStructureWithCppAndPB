#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l, r;
    cin>>l>>r;
    string s;
    cin>>s;
    reverse(s.begin() + l - 1, s.begin() + r);
    cout<<s<<"\n";
    return 0;
}
