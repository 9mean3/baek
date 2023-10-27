#include<iostream>
#include<queue>
#include<tuple>
using namespace std;

int board[101][101][101] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N, H, cnt = 0;
	queue<tuple<int, int, int>> q;
	cin >> M >> N >> H;
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				cin >> board[k][j][i];
				if (board[k][j][i] == 1) {
					q.push({ k, j, i });
				}

			}
		}
	}

	int dx[6] = { 1, 0, 0, -1, 0, 0 };
	int dy[6] = { 0, 1, 0, 0, -1, 0 };
	int dz[6] = { 0, 0, 1, 0, 0, -1 };

	int mx = 0, my = 0, mz = 0;
	while (!q.empty())
	{
		int x = get<0>(q.front());
		int y = get<1>(q.front());
		int z = get<2>(q.front());
				mx = x;
				my = y;
				mz = z;
		//cout << mx << my << mz << endl;
		q.pop();
		for (int i = 0; i < 6; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + dz[i];
			if (nx < 0 || ny < 0 || nz < 0 || nx >= M || ny >= N || nz >= H) continue;
			if (board[nx][ny][nz] == 0) {
				board[nx][ny][nz] = board[x][y][z] + 1;
				q.push({ nx, ny, nz });
			}
		}
	}

	for (int k = 0; k < H; k++)
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (board[i][j][k] == 0) {
					cout << -1;
					return 0;
				}

			}
		}
	}

	cout << board[mx][my][mz] - 1;
}