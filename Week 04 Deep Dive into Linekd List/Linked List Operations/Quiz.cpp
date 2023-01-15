//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> v[1];
//    v[0].push_back(3);
//    v[0].push_back(3);
//    vector<int> t = v[0];
//    cout << t[0] << '\n';
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(1);
    v[0] = 9;
    v.resize(9);
    cout << v.back() << '\n';
    return 0;
}
