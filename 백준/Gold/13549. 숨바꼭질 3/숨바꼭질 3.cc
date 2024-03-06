#include<iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;

int visited[100001] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	int answer = -1;
	cin >> N >> K;

	deque<pair<int, int>> dq;
	dq.push_back({ N, 0 });
	while (!dq.empty())
	{
		int x = dq.front().first;
		int cnt = dq.front().second;
		dq.pop_front();
        visited[x] = true;

		if (x == K) {
			answer = cnt;
			break;
		}

		if (x * 2 >= 0 && x * 2 <= 100000 && !visited[x * 2]) {
			dq.push_front({ x * 2, cnt });
		}
		if (x + 1 >= 0 && x + 1 <= 100000 && !visited[x + 1]) {
			dq.push_back({ x + 1, cnt + 1 });
		}
		if (x - 1 >= 0 && x - 1 <= 100000 && !visited[x - 1]) {
			dq.push_back({ x - 1, cnt + 1 });
		}
	}

	cout << answer;
}