// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l, r;
	cin>>l>>r;
	string str;
	cin>>str;
	int len = str.length();

    if (l < 0 || r >= len || l > r)
		cout<< str;

	// While there are characters to swap
	while (l < r) {

		// Swap(str[l], str[r])
		char c = str[l];
		str[l] = str[r];
		str[r] = c;

		l++;
		r--;
	}
	cout << str;

	return 0;
}
