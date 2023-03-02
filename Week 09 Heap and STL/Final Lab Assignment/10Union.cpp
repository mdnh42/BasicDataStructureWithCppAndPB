//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    set<int> set_First;
//    set<int> set_Second;
//    set<int> unionSet;
//
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int set_First_Number;
//        cin >> set_First_Number;
//        set_First.insert(set_First_Number);
//    }
//
//    int m;
//    cin >> m;
//
//    for (int i = 0; i < m; i++) {
//        int set_second_Number;
//        cin >> set_second_Number;
//        set_Second.insert(set_second_Number);
//    }
//
//    set_union(set_First.begin(), set_First.end(), set_Second.begin(), set_Second.end(), inserter(unionSet, unionSet.begin()));
//
//    for (auto it : unionSet) {
//        cout << it << " ";
//    }
//    cout <<"\n";
//
//    return 0;
//
//}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        st.insert(b);
    }
    for (auto i : st)
        cout << i << " ";
    cout << "\n";
    return 0;
}
