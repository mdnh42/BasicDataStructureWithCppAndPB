#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
//    Insert o(logn)
    mp["goro"] = 1;
    mp["chagol"] = 2;
    mp["vera"] = 3;

    cout<<mp["goro"]<<"\n";
    cout<<mp["vera"]<<"\n";

    mp["cat"] = 2;
    cout<<mp["cat"]<<"\n";

    mp["cat"] = 5;
    cout<<mp["cat"]<<"\n";


//    Print The Map
    for(auto it:mp)
    {
        cout<<"Key : "<<it.first<< ", Value: "<<it.second<<"\n";
    }

    return 0;
}
