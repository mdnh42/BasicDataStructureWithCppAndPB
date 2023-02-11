#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcca";
    deque<char> d;

    for(int i=0; i<st.size(); i++)
    {
        d.push_front(st[i]);
    }
    bool ans = true;
    while(d.size()>1)
    {
        if(d.front() == d.back())
        {
            d.pop_front();
            d.pop_back();
        }
        else{
            ans = false;
            break;
        }
    }
    if(ans == true)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
