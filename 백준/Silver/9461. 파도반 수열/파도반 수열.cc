#include<iostream>
using namespace std;

long long dp[101] = { 0, 1, 1, 1, 2, 2, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int input;
		cin >> input;
		for (int i = 5; i <= input; i++)
		{
			dp[i] = dp[i - 1] + dp[i - 5];
		}
		cout << dp[input] << '\n';
	}
}