#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int n, m, v;
int board[1001][1001] = { 0, };
int visited[1001] = { 0, };
int cnt = 0;
int result[1001];

void DFS(int num) {
	visited[num] = 1;
	result[cnt] = num;
	cnt++;
	for (int i = 0; i <= n; i++)
	{
		if (visited[i] == 0 && board[num][i] == 1) {
			DFS(i);
		}
	}
}

void BFS(int num) {
	queue<int> q;
	visited[num] = 1;
	q.push(num);
	while (!q.empty())
	{
		int f = q.front();
		result[cnt] = f;
		cnt++;
		q.pop();
		for (int i = 0; i <= n; i++)
		{
			if (visited[i] == 0 && board[f][i]) {
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main()
{
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;
	}
	DFS(v);

	for (int i = 0; i < n; i++)
	{
        if (result[i] == 0) break;
		cout << result[i] << ' ';
	}
	cout << endl;

	fill_n(visited, 1001, 0);
	fill_n(result, 1001, 0);
	cnt = 0;

	BFS(v);

	for (int i = 0; i < n; i++)
	{
        if (result[i] == 0) break;
		cout << result[i] << ' ';
	}
}