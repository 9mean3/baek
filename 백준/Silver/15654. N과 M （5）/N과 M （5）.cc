#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, m;
int arr[9] = { 0, };
bool used[9] = { 0, };

vector<int> inputarr;

void func(int number, int size) {
	if (size == m) {
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (used[i]) continue;

		used[i] = true;
		arr[size] = inputarr[i];
		func(i, size + 1);
		used[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		inputarr.push_back(input);
	}
	sort(inputarr.begin(), inputarr.end());
	func(1, 0);
}