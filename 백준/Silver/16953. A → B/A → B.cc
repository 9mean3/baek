#include <iostream>
#include <vector>
using namespace std;

int inf = 1000000;
int minCnt = inf;
long long A, B;

void dfs(long long a, int cnt) {
	if (a > B) return;

	if (a == B) {
		minCnt = min(cnt, minCnt);
	}

	dfs(a * 2, cnt + 1);
	dfs(a * 10 + 1, cnt + 1);
}

int main() {
	cin >> A >> B;

	dfs(A, 1);

	if (minCnt == inf)
		cout << -1;
	else
		cout << minCnt;
}