#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {

    ios::sync_with_stdio(false);
cin.tie(NULL);
    string s;
    cin>>s;
    stack<char>st;
    for(int i= 0; i<s.size(); i++)
    {
        char now = s[i];
        if(now == '{')
        {
            st.push(now);
        }
        else
        {
            if(st.empty())
            {
                cout<<"0"<<"\n";
                return 0;
            }
            if (now == '}' && st.top() == '{')
            {
                st.pop();

            }
            else
            {
                cout<<"0"<<"\n";
                return 0;
            }
        }

    }
    if(st.empty())
    {
        cout<<s.size()<<"\n";
    }
    else
    {
        cout<<"0"<<"\n";
    }

    return 0;
}
