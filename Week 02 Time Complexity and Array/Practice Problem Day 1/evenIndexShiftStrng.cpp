#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;


    cin>>s;

    for(int i=1; i<=s.size(); i++)
    {
        if(i%2 == 0)
        {
            s[i] = s[i] + 1;

        }
    }

    cout<<s<<"\n";

    return 0;
}
