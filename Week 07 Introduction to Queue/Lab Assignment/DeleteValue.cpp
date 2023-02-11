//#include<bits/stdc++.h>
//using namespace std;
//
//void deleteValue(list<int>&l, int value)
//{
//    auto a = l.begin();
//    a = find(l.begin(), l.end(), value);
//
//    if(a!=l.end())
//    {
//        l.erase(a);
//    }
//
//    for(int ans : l)
//    {
//        cout<<ans<<" ";
//    }
//}
//int main()
//{
//    list<int> l = {7, 3, 8, 4, 5, 4};
//    int value = 4;
//    deleteValue(l, 4);
//
//    return 0;
//}
//


#include <bits/stdc++.h>
using namespace std;
void deleteValue(list<int> &l, int value)
{
    int ans = 0;
    for (auto it = l.begin(); it != l.end(); it++)
    {
        if (*it == value)
        {
            break;
        }
        ans++;
    }
    auto it = l.begin();
    advance(it, ans);
    l.erase(it);
}


int main()
{
    list<int> l;
    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);
    deleteValue(l, 4);
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}

