#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    stack<char>st;

    for(int i=0; i<s.size(); i++)
    {
        char now = s[i];
        if(now == '(' || now == '{' || now == '[')
        {
            st.push(now);
        }
        else
        {
            if(st.empty())
            {
                cout<<"Invalid";
                    return 0;
            }
            if(now== ')' && st.top() == '(')
            {
                st.pop();
            }
            else if(now == '}' && st.top() == '{')
                {
                    st.pop();
                }
            else if(now == ']' && st.top() == '[')
            {
                st.top();
            }
            else
            {
                cout<<"Invalid";
                return 0;
            }
        }
    }
    if(st.empty())
    {
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }

    return 0;
}
