#include<iostream>	
using namespace std;

int board[101][101] = { 0, };
	int visited[101] = { 0, };
	int n, m;
void DFS(int num) {
	visited[num] = 1;
	for (int i = 0; i <= n; i++)
	{
		if (visited[i] == 0 && board[num][i] == 1) {
			DFS(i);
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;
	}
	DFS(1);

	int cnt = 0;
	for (int i = 0; i <= n; i++)
	{

		if (visited[i] == 1)
			cnt++;
	}

	cout << cnt - 1;
}