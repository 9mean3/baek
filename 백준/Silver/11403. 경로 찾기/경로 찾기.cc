#include<iostream>
#include<queue>
using namespace std;

int INF = 200000000;
int board[101][101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(&board[0][0], &board[100][100], INF);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int input;
			cin >> input;
			if (input > 0)
				board[i][j] = input;
		}
	}

	for (int m = 0; m < n; m++)
	{
		for (int s = 0; s < n; s++)
		{
			for (int e = 0; e < n; e++)
			{
				int minb = min(board[s][e], board[s][m] + board[m][e]);
				if (minb != INF)
					board[s][e] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] != INF)
				cout << board[i][j] << ' ';
			else
				cout << 0 << ' ';
		}
		cout << endl;
	}
}