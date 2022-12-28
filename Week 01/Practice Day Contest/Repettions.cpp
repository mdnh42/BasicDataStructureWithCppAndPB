#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>> s;
    int c = 0, ans = 1;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i] != s[i-1])
        {
            c= max(c, ans);
            ans = 0;
        }
        ans++;
    }
    c = max(c, ans);
    cout<<c;

    return 0;
}
