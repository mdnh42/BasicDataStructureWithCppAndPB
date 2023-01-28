#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s, int i)
{
    if(i>s.size()/2) // abcba 0>ab
    {
        return true;
    }
    return (s[i] == s[s.size()-i-1] && palindrome(s, i+1));
//            s[a] == [s[s.size()-i-1)] a and
}
int main()
{
    string s;
    cin>>s;
    if(palindrome(s, 0))
    {
        cout<<"Yes";
    }
    else
        cout<<"No";

    return 0;
}
