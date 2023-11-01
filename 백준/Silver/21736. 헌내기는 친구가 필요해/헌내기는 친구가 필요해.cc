#include<iostream>
#include<queue>
using namespace std;


	int N, M;
	char board[601][601] = { 0, };
	int visited[601][601] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<pair<int, int>> q;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 'I') q.push({ i, j });
		}
	}

	int cnt = 0;
	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		if (board[x][y] == 'P') cnt++;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (board[nx][ny] != 'X' && !visited[nx][ny]) {
				q.push({ nx, ny });
				visited[nx][ny] = 1;
			}
		}
	}

	if (cnt == 0) {
		cout << "TT";
		return 0;
	}
	cout << cnt;
}