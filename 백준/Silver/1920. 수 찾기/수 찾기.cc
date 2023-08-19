#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		mp[input]++;
	}

	int m;
	cin >> m;
	int* mrr = new int[m];
	for (int i = 0; i < m; i++)
		cin >> mrr[i];

	int* answer = new int[m] {0};
	for (int i = 0; i < m; i++)
	{
		if (mp[mrr[i]] >= 1)
			answer[i] = 1;
	}
	for (int i = 0; i < m; i++)
	{
		cout << answer[i] << '\n';
	}
	delete[] mrr, answer;
}