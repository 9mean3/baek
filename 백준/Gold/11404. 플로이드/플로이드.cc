#include<iostream>
using namespace std;

const int INF = 200000000;

int board[102][102] = { 0, };
int d[101][101] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(&board[0][0], &board[101][101], INF);
	int n, m;
	cin >> n >> m;
	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (board[a][b] > c) // 아 슈발 어케해야됌
			board[a][b] = c;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j) d[i][j] = 0;
			else if (board[i][j]) d[i][j] = board[i][j];
			else d[i][j] = INF;
		}
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == INF) cout << 0 << ' ';
			else cout << d[i][j] << ' ';
		}
		cout << '\n';
	}
}