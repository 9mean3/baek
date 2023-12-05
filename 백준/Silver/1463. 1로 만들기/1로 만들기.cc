#include<iostream>
using namespace std;

long long dp[1000001] = { 0, 0, 1,};

int main(){
    int input;
	cin >> input;
	for (int i = 2; i <= input; i++)
	{
		dp[i] = 1 + dp[i - 1];
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
	}
	cout << dp[input];
}