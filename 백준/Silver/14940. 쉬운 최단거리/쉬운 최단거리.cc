#include<iostream>
#include<queue>
using namespace std;

int N, M;
int board[1001][1001] = { 0, };
int visited[1001][1001] = { 0, };

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
			if (board[i][j] == 2) q.push({ i, j });
		}
	}

	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (board[nx][ny] == 1 && !visited[nx][ny]) {
				q.push({ nx, ny });
				visited[nx][ny] = visited[x][y] + 1;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (board[i][j] == 1 && visited[i][j] == 0) visited[i][j] = -1;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << visited[i][j] << ' ';
		}
		cout << "\n";
	}
}