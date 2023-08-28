#include<iostream>
#include<vector>
#include<queue>

using namespace std;


string board[101];
int row, col;
int visited[101][101];
queue<pair<int, int>>que;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
	que.push({ x, y });
	visited[x][y] = 1;
	while (!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (nx < 0 || ny < 0 || nx >= row || ny >= col) { continue; }
			//cout << nx << ny << endl;
			if (board[nx][ny] == '1' && visited[nx][ny] == 0) {
				visited[nx][ny] = visited[x][y] + 1;
				que.push({ nx,ny });
			}
		}
	}
}

int main()
{
	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		cin >> board[i];
	}
	BFS(0, 0);
	cout << visited[row - 1][col - 1] << endl;
}