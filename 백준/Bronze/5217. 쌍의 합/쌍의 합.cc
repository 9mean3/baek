#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int l = 1;
		int r = n - 1;
		cout << "Pairs for " << n << ": ";
		while (l < r)
		{
			cout << l << ' ' << r;
			l++; r--;
			if (l >= r)
				break;
			cout << ", ";
		}
		cout << '\n';
	}
}