#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;

int m, n;
vector<vector<int>> board;
pair<int, int> p;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> m >> n;
	board.resize(n, vector<int>(m, -1));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int input;
			cin >> input;
			board[i][j] = input;
		}
	}

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 1) {
				q.push({ i, j });
				//BFS(i, j);
			}
		}
	}



	int dx[4] = { 0,1,0,-1 };
	int dy[4] = { 1,0,-1,0 };

	while (!q.empty())
	{
		p = q.front();
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (board[nx][ny] == -1) continue;
			if (board[nx][ny] == 0 || (board[nx][ny] != 0 && board[nx][ny] > board[x][y] + 1)) {
				q.push({ nx, ny });
				board[nx][ny] = board[x][y] + 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 0) {
				cout << -1;
				return 0;
			}
		}
	}

	cout << board[p.first][p.second] - 1;
}