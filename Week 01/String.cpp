#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Concatination
    string s = "I am eating rice.";
    string s2 = " I am also eating dal.";
    string s3 = s+s2;
    cout<<s3<<endl;

    //String Length
    cout<<s.size()<<endl;
    // String shift
    for(int i =0; i<s.size(); i++)
    {
        s[i] = s[i] + 1;
    }
    cout<<s<<endl;

    //Delate String first and Last Character using function erase.(s.begin() and pop_back();
    s.erase(s.begin()+1);
    cout<<s<<"\n";
    s.pop_back();
    cout<<s<<"\n";
    return 0;
}
