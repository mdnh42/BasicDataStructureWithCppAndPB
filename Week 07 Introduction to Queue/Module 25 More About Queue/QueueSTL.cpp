#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    //enqueue o(1)
    q.push(5);
    q.push(10);
    q.push(15);

    //Front o(1)
    cout<<q.front()<<"\n";

    //dequeue o(1)

    q.pop();
    cout<<q.front()<<"\n";
    q.pop();
    cout<<q.front()<<"\n";
    q.pop();
    cout<<q.front()<<"\n";

    return 0;
}
