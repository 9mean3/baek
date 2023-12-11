#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back({ b, a });
	}
	sort(v.begin(), v.end());

	int cnt = 0;
	int lastTime = -1;
	for (auto i : v) {
		if (i.second >= lastTime) {
			cnt++;
			lastTime = i.first;
		}
	}

	cout << cnt;
}