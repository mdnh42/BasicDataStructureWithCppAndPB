#include<bits/stdc++.h>
using namespace std;

int prec(char ch)
{
    if(ch == '/' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}


int main()
{
    string s;
    cin>>s;
    stack<char>st;
    string result = "";
    for(int i=0; i<s.size(); i++)
    {
        char now = s[i];
        if(now>='a' && now<= 'z')
        {
            result += now;
        }
        else if(now == '(')
        {
            st.push('(');
        }
        else if( now == ')')
        {
            while(st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(st.size() && prec(st.top())>=prec(now))
            {
                result +=st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while(st.size())
    {
        result += st.top();
        st.pop();
    }
    cout<<result<<"\n";
    return 0;
}


