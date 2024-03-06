#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int visited[100001] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, k;
	int answer = -1;
	int ansCnt = 0;

	cin >> N >> k;

	queue<pair<int, int>> q;
	q.push({ N, 0 });
	while (!q.empty())
	{
		int n = q.front().first;
		int cnt = q.front().second;
		//cout << cnt << ' ' << n << endl;
		q.pop();
		visited[n] = 1;

		if (n == k) {
			answer = cnt;
			ansCnt++;
		}
		else if (answer != -1 && cnt > answer)
			break;

		if (!visited[n * 2] && n * 2 >= 0 && n * 2 <= 100000)
			q.push({ n * 2, cnt + 1 });
		if (!visited[n + 1] && n + 1 >= 0 && n + 1 <= 100000)
			q.push({ n + 1, cnt + 1 });
		if (!visited[n - 1] && n - 1 >= 0 && n - 1 <= 100000)
			q.push({ n - 1, cnt + 1 });
	}

	cout << answer << '\n' << ansCnt;
}