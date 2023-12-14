#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n;
	vector<int> arr;
	int answer = 0;
	cin >> n;
	arr.resize(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		int input;
		cin >> input;
		arr[i] = input;
	}
	sort(arr.begin(), arr.end());
	for (int i = 1; i <= n; i++)
	{
		if (i > 1)
			arr[i] += arr[i - 1];
		answer += arr[i];
	}
	cout << answer;
}