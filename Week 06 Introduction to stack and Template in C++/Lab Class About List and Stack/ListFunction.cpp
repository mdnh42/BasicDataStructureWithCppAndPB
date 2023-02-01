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

void Insert(list<int>&l, int index, int value)
{
    auto it = l.begin();
    advance(it, index);
    l.insert(it, 100);
}

void Delete(list<int>&l, int index)
{
    auto it = l.begin();
    advance(it, index);
    l.erase(it);
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

    //Insert Any Position
    Insert(l, 2, 100);
    print(l);

    Delete(l, 1);
    print(l);

    //Size
    cout<<l.size()<<"\n";


    return 0;
}

