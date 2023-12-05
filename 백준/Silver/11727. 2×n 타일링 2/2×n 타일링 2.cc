#include<iostream>
using namespace std;

long long dp[1000001] = { 0, 1, 3 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input;
	cin >> input;
	for (int i = 3; i <= input; i++)
	{
		dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;
	}
	cout << dp[input];
}