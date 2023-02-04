#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    int cnt =0;
    for(int i=0; i<s.size(); i++)
    {
        char c =s[i];
        int now = s[i];
        if(c=='(' st.push(c))
        else if(c== ')' && st.empty() == false && st.pop() == )

    }
    cout<<cnt*2;

    return 0;
}
