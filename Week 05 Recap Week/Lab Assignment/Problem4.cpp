#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s, int i)
{
    if(i>s.size()/2)
    {
        return true;
    }


    return (s[i] == s[s.size()-i-1] && palindrome(s, i+1));
}
int main()
{
    string s = "abcb";
    if(palindrome(s, 0))
    {
        cout<<"Yes";
    }
    else
        cout<<"No";

    return 0;
}
