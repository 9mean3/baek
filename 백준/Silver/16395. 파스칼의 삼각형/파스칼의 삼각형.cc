#include <iostream>
using namespace std;

long long dp[31][31] = {1,};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		dp[i][0] = dp[i - 1][0];
		dp[i][i] = dp[i - 1][i];
		for (int j = 1; j < i; j++)
		{
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}

	cout << dp[n][k - 1];
}