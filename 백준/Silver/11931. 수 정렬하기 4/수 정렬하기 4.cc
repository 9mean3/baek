#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	set<int, greater<int>> s;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		s.insert(input);
	}

	for (auto i : s)
		cout << i << "\n";
}