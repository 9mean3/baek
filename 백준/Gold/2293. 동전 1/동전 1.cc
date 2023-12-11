#include<iostream>
#include <vector>
using namespace std;

int coin[101];
int dp[10001] = { 1, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> coin[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = coin[i]; j <= k; j++)
		{
			dp[j] += dp[j - coin[i]];
		}
	}
	cout << dp[k] << endl;
}