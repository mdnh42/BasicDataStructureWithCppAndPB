
#include <bits/stdc++.h>
using namespace std;

int main()
{
//    string s="abcde";
//    s.erase(s.begin()+(2-2));
//
//    cout << s << '\n';
//// vector<int> v(10);
//vector<int> v= {2,9,1,3,7};
//
//    sort(v.begin()+1,v.begin()+3);
//
//    for(int i=0; i<v.size(); i++)
//        cout << v[i] << " ";
//    cout << '\n';
//string s="2997";
//    s+="11";
//    cout << s.size() << '\n';

vector<int> v= {2,5,1,9,7};
    reverse(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << '\n';

    return 0;
}
