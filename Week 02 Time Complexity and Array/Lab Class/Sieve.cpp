#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>primes;
    vector<bool>visited(n+1);

    for(int i=2; i<=n; i++)
    {
        f(visited[i] == false)
        {
            primes.push_back(i);
            for(int x =2; i*x<=n; x++)
            {
                visited[x] = true;
            }
        }
    }
    cout<<prime.size()<<"\n";

    return 0;
}
