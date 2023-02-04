#include<bits/stdc++.h>
using namespace std;

void print(list<int>l)
{
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
    l.insert(it, value);
}

void getValue(list<int>&l, int index)
{
    auto it = l.begin();
    advance(it, index);
    cout<< *it;
}
void Search(list<int>&l, int value)
{
    auto it = l.begin();
    it = find(l.begin(), l.end(), value);
    return;

}
void Delete(list<int>&l)
{
    auto it = l.begin();
    advance(it, 0);
    l.erase(it);
}
int main()
{
    list<int>l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    print(l);

    l.push_back(50);
    l.push_back(60);
    print(l);

    l.pop_back();
    print(l);

    l.pop_front();
    print(l);


    Insert(l, 2, 100);
    print(l);

//    getValue(l, 2);

    Search(l, 50);

    Delete(l);
    print(l);
    return 0;
}
