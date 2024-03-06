#include<iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int dp[15][15] = { 0, };
		int K, n;
		cin >> K >> n;
		for (int i = 1; i <= n; i++)
		{
			dp[0][i] = i;
		}

		for (int i = 1; i <= K; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				for (int k = 0; k <= j; k++)
				{
					dp[i][j] += dp[i - 1][k];
				}
			}
		}

		cout << dp[K][n] << '\n';
	}
}