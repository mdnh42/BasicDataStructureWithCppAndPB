
#include<bits/stdc++.h>
using namespace std;
void Swap(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
    cout<<x<<endl<<y<<endl;
}
int main()
{
    int a, b;
    cin>>a>>b;
    Swap(a,b);

    return 0;
}
