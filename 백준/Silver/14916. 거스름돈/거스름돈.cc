#include <iostream>
using namespace std;

int dp[100001] = { 0, 0, 1, 0, 2, 1, };

int main(){
    int n;
    cin >> n;
    for (int i = 6; i <= n; i++) {
        if(dp[i - 2] == 0 && dp[i - 5] == 0)
            continue;
        else if(dp[i - 2] == 0)
            dp[i] = dp[i - 5] + 1;
        else if(dp[i - 5] == 0)
            dp[i] = dp[i - 2] + 1;
        else
            dp[i] = min(dp[i - 2] + 1, dp[i - 5] + 1);
    }
    if(dp[n] != 0)
        cout << dp[n];
    else
        cout << -1;
}