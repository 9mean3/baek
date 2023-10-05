#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;

int N;
string board[101];
int visited[101][101] = { 0, };

void BFS(int ix, int iy, bool isJRSY) {
	queue<pair<int, int>> q;
	q.push({ ix, iy });
	visited[ix][iy] = 1;

	int dx[4] = { 0,-1,0,1 };
	int dy[4] = { 1,0,-1,0 };

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (!isJRSY) {
				if (visited[nx][ny] == 0 && board[x][y] == board[nx][ny]) {
					q.push({ nx, ny });
					visited[nx][ny] = 1;
				}
			}
			else {
				if (visited[nx][ny] == 0 && board[x][y] == board[nx][ny]) {
					q.push({ nx, ny });
					visited[nx][ny] = 1;
					continue;
				}
				else if (visited[nx][ny] == 0 && ((board[x][y] == 'R' && board[nx][ny] == 'G') || (board[x][y] == 'G' && board[nx][ny] == 'R'))) {
					q.push({ nx, ny });
					visited[nx][ny] = 1;
					continue;
				}
			}
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;
		board[i] += input;
	}

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visited[i][j] == 0) {
				BFS(i, j, false);
				cnt++;
			}
		}
	}
	cout << cnt << ' ';

	fill_n(&visited[0][0], 101 * 101, 0);

	cnt = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visited[i][j] == 0) {
				BFS(i, j, true);
				cnt++;
			}
		}
	}
	cout << cnt;
}