
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }

    if(n==2)
    {
         cout<<2;
        return 0;
    }
    else
    {
        cout<< pow(2,n);
    }

    return 0;
}
