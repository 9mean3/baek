#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<int> arr;
	vector<int> srr;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);
		srr.push_back(input);
	}
	sort(srr.begin(), srr.end());
	srr.erase(unique(srr.begin(), srr.end()), srr.end());

	for (auto i : arr) {
		cout << lower_bound(srr.begin(), srr.end(), i) - srr.begin() << ' ';
	}
}