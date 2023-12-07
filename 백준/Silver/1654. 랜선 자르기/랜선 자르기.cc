#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, N;
	vector<int> v;
	cin >> K >> N;
	for (int i = 0; i < K; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());

	long left = 1, right = v.back();
	while (left <= right)
	{
		long mid = (left + right) / 2;
		long sum = 0;
		for (auto i : v) {
			sum += i / mid;
		}

		if (sum < N) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout << right;
}