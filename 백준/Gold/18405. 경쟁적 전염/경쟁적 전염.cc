#include<iostream>
#include<queue>
using namespace std;

int main()
{
		int board[201][201];
	queue<pair<int, int>> q[1001];
	int N, K, S, X, Y;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> board[i][j];
			if (board[i][j] != 0)
				q[board[i][j]].push({ i, j });
		}
	}
	cin >> S >> X >> Y;



	int dx[4] = { 0,1,0,-1 };
	int dy[4] = { 1,0,-1,0 };

	for (int idx = 0; idx < S; idx++) {
		for (int i = 1; i <= K; i++)
		{
			int size = q[i].size();
			while (!q[i].empty() && size-- > 0) {
				int x = q[i].front().first;
				int y = q[i].front().second;
				q[i].pop();
				for (int j = 0; j < 4; j++)
				{
					int nx = x + dx[j];
					int ny = y + dy[j];
					if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
					if (board[nx][ny] == 0) {
						board[nx][ny] = board[x][y];
						q[i].push({ nx, ny });
					}
				}
			}
		}
	}

	//for (int i = 0; i < N; i++)
	//{
	//	for (int j = 0; j < N; j++)
	//	{
	//		cout << board[i][j];
	//		//if (board[i][j] != 0) q.push({ i, j });
	//	}
	//	cout << endl;
	//}

	cout << board[X - 1][Y - 1];
}