#include<iostream>
#include<queue>
using namespace std;

int board[50][50];
bool visited[50][50] = { 0, };

int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, -1, -1, 1, 1 };

int h, w;

void bfs(int sx, int sy) {

	queue<pair<int, int>> q;

	q.push({ sx, sy });
	visited[sx][sy] = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				int nx = x + dx[j];
				int ny = y + dy[i];
				if (nx < 0 || nx >= w || ny < 0 || ny >= h) {
					continue;
				}

				if (!visited[nx][ny] && board[nx][ny] == 1) {
					visited[nx][ny] = 1;
					q.push({ nx, ny });
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		fill(&visited[0][0], &visited[50][50], 0);
		int cnt = 0;
		cin >> w >> h;

		if (w == 0 && h == 0) break;

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> board[j][i];
			}
		}

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (!visited[j][i] && board[j][i] == 1) {
					bfs(j, i);
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}
}