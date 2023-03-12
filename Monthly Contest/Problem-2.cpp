#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string n;
    cin>>n;
    long long int oddSum = 0;
    long long int evenSum = 0;

    for (int i=0; i<n.length(); i++)
    {
        if (i % 2 == 0)
        {
            evenSum += (n[i] - '0');
        }
        else
        {
            oddSum += (n[i] - '0');
        }
    }

    if ((oddSum - evenSum)%11 ==0)
    {
        cout <<"YES"<<"\n";
    }
    else
    {
        cout <<"NO"<<"\n";
    }
    return 0;
}
