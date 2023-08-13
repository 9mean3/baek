#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			if (a >= b)
				cout << "MMM BRAINS\n";
			else
				cout << "NO BRAINS\n";
		}
}