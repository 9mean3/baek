#include<iostream>
using namespace std;

int inf = 200000000;
int board[101][101] = { 0, };
int dist[101] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(&board[0][0], &board[100][100], inf);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;
	}

	for (int m = 0; m <= N; m++)
	{
		for (int s = 0; s <= N; s++)
		{
			for (int e = 0; e <= N; e++)
			{
				board[s][e] = min(board[s][e], board[s][m] + board[m][e]);
			}
		}
	}

	//for (int i = 1; i <= N; i++)
	//{
	//	for (int j = 1; j <= N; j++)
	//	{
	//		cout << board[i][j] << ' ';
	//	}
	//	cout << endl;
	//}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (board[i][j] != inf && i != j)
				dist[i] += board[i][j];
		}
	}

	int minv = inf;
	int minIdx = 101;
	for (int i = 1; i <= N; i++)
	{
		if (dist[i] == minv) {
			minIdx = min(minIdx, i);
		}
		else if (dist[i] < minv) {
			minv = dist[i];
			minIdx = i;
		}
	}

	cout << minIdx;
}