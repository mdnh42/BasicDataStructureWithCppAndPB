#include<bits/stdc++.h>
using namespace std;

void print(list<int> l)
{
    //O(n)
//    list<int>:: iterator a = l.begin();
    auto a = l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";

}

int main()
{
    list<int> l;
    //O(1)
    //Push or Insart a Head
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    print(l);
    // Insert Null
    l.push_back(40);
    l.push_back(50);
    print(l);

    // Pop_back; O(1)
    l.pop_back();
    print(l);

    // Pop front o(1)
    l.pop_front();
    print(l);

    return 0;
}

