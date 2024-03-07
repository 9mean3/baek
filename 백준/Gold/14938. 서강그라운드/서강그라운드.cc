#include<iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;

int N, M, R;
int score[101] = { 0, };
int board[101][101] = { 0, };
int maxScore[101] = { 0, };
int INF = 200000000;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(&board[0][0], &board[100][100], INF);

	cin >> N >> M >> R;
	for (int i = 1; i <= N; i++)
	{
		cin >> score[i];
	}
	for (int i = 0; i < R; i++)
	{
		int a, b, l;
		cin >> a >> b >> l;
		board[a][b] = l;
		board[b][a] = l;
	}

	for (int m = 1; m <= N; m++)
	{
		for (int s = 1; s <= N; s++)
		{
			for (int e = 1; e <= N; e++)
			{
				if (s != e)
				board[s][e] = min(board[s][e], board[s][m] + board[m][e]);
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (board[i][j] <= M) {
				maxScore[i] += score[j];
			}
		}
		maxScore[i] += score[i];
	}

	int answer = -1;
	for (int i = 1; i <= N; i++)
	{
		if (answer < maxScore[i]) answer = maxScore[i];
	}

	cout << answer;
}