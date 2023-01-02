//// C++ code for the above approach
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin>>n;
//
//    vector<int> ans;
//    if (n<3)
//    {
//        cout<<"NO SOLUTION";
//    }
//    else
//    {
//        if (n % 2 == 0)
//        {
//            for (int i = 2; i <= n; i += 2)
//            {
//                ans.push_back(i);
//            }
//            for (int i = 1; i < n; i += 2)
//            {
//                ans.push_back(i);
//            }
//        }
//        else
//            {
//                for (int i = 2; i <= n - 1; i += 2)
//                {
//                    ans.push_back(i);
//                }
//                for (int j = 1; j <= n; j += 2)
//                {
//                    ans.push_back(j);
//                }
//            }
//
//    for (int x : ans)
//        cout << x << " ";
//
//    }
//
//    return 0;
//}

#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    if(n == 1) cout << 1 << endl;
    else if (n < 4) cout << "NO SOLUTION" << endl;
    else if (n == 4) cout << "2 4 1 3\n";
    else {
        for (int i = 1; i <= n; i += 2) cout << i << " ";
        for (int i = 2; i <= n; i += 2) {
            cout << i;
            if (i + 2 <= n) cout << " ";
            else cout << endl;
        }
    }
}
