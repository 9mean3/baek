#include<iostream>
using namespace std;

int arr[1001] = { 0, };
int dp[1001] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int maxv = -1;
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i]) {

				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
		if (maxv < dp[i]) maxv = dp[i];
	}


	cout << maxv;
}