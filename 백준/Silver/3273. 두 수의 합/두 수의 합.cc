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

	int cnt = 0;
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);
	}
	sort(arr.begin(), arr.end());

	int x;
	cin >> x;

	int l = 0;
	int r = n - 1;
	while (l < r)
	{
		int value = arr[l] + arr[r];
		if (value == x) {
			cnt++;
			l++;
		}
		else if (value < x) {
			l++;
		}
		else if (value > x) {
			r--;
		}
	}
	cout << cnt;
}