#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int N, Q;
    cin >> N;
    long long int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> Q;
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        long long product = 1;
        for (int i = L-1; i < R; i++)
        {
            product *= arr[i];
        }
        cout << product <<"\n";
    }
    return 0;
}
