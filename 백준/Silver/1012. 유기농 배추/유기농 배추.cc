#include<iostream>
using namespace std;

int testcase;
int board[51][51];
int visited[51][51];
int row, col, num;

void DFS(int x, int y) {
	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx > row || ny > col || nx < 0 || ny < 0) continue;
		if (board[nx][ny] == 1 && visited[nx][ny] == 0) {
			visited[nx][ny] = 1;
			DFS(nx, ny);
		}
	}
}

int main()
{
	cin >> testcase;
	while (testcase--) {
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);
		int cnt = 0;
		cin >> row >> col >> num;
		for (int i = 0; i < num; i++)
		{
			int x, y;
			cin >> x >> y;
			board[x][y] = 1;
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (board[i][j] == 1 && visited[i][j] == 0) {
					DFS(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}
}