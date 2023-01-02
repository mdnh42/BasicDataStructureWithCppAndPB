#include<bits/stdc++.h>>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i=0;
    int ans;
    int prod=1;

    string str;
    cin >>str;


    while(str[i]!='\0')
    {
        if(str[i]!='x')
        {
                ans=str[i]-'1'+1;
                prod*=ans;
        }
        i++;
    }
    cout<<prod<<"\n";
}

