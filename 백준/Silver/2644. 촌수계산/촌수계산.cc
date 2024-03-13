#include<iostream>
#include<queue>
using namespace std;

int n, targetA, targetB, m;
int board[101][101] = { 0, };
int visited[101] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;
	cin >> n >> targetA >> targetB >> m;
	while (m--)
	{
		int x, y;
		cin >> x >> y;
		board[x][y] = 1;
		board[y][x] = 1;
	}

	q.push(targetA);
	visited[targetA] = 1;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (int i = 0; i <= n; i++)
		{
			if (board[cur][i] == 1 && visited[i] == 0) {
				q.push(i);
				visited[i] = visited[cur] + 1;
			}
		}
	}
	cout << visited[targetB] - 1;
}