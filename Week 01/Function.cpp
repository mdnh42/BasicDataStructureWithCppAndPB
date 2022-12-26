#include<bits/stdc++.h>
using namespace std;
string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}
void erase_first_last2(string &s)
{
    s.erase(s.begin());
    s.pop_back();

    cout<<"In function s="<<s<<endl;

}
int main()
{
    string s;
    cin>>s;
//    string ans = erase_first_last(s);
//
//    cout<<s<<endl;
//    cout<<ans<<endl;
    erase_first_last2(s);
    cout<<s<<endl;
    return 0;
}
