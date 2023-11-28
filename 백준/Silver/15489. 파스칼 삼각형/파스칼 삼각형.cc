#include <iostream>
using namespace std;

long long dp[31][31] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int r, c, w;
	int sum = 0;
	cin >> r >> c >> w;

	dp[1][1] = 1;
	for (int i = 2; i <= r + w; i++)
	{
		/*dp[i][0] = dp[i - 1][0];
		dp[i][i] = dp[i - 1][i];*/
		for (int j = 1; j < i; j++)
		{
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}


	for (int i = r + 1; i <= r + w; i++)
	{
		for (int j = c; j < c + ((i) - r); j++)
		{
			sum += dp[i][j];
		}
	}

	cout << sum;
}