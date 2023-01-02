#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Swap Function
    int a = 4, b=5;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    //Min
    int mini = min(a,b);
    cout<<mini<<endl;

    //Max
    int maxi = max(a,b);
    cout<<maxi<<endl;

    //Multiple
    int x = 3, y = 5, z = 5;
    int maxim = max({x, y, z});
    cout<<maxim<<endl;

    int manim = min({x, y, z});
    cout<<manim<<endl;

//    sotring
    vector<int> numbers = {3, 2, 1, 4, 5};
    for(int i=0; i<numbers.size(); i++)
        cout<<numbers[i]<<endl;

    sort(numbers.begin(), numbers.end());
    cout<<"After Sorting"<<endl;
    for(int i=0; i<numbers.size(); i++)
        cout<<numbers[i]<<endl;
    cout<<endl;
    return 0;
}

