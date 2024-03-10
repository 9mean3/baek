#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int n, m, k;
int board[101][101] = { 0, };
int visited[101][101] = { 0, };
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int bfs(int x, int y) {
	int size = 0;
	queue<pair<int, int>> q;
	q.push({ x, y });
	visited[x][y] = 1;

	while (!q.empty()) {
		pair<int, int> point = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = point.first + dx[i];
			int ny = point.second + dy[i];
			if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
				if (!visited[nx][ny] && board[nx][ny] != -1) {
					q.push({ nx, ny });
					visited[nx][ny] = visited[point.first][point.second] + 1;
					size++;
				}
			}
		}
	}

	return size;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> answer;
	cin >> n >> m >> k;
	for (int idx = 0; idx < k; idx++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x < x2; x++)
		{
			for (int y = y1; y < y2; y++)
			{
				board[y][x] = -1;
			}
		}
	}
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		cout << board[i][j] << ' ';
	//	}
	//	cout << endl;
	//}






	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] != -1 && !visited[i][j]) {
				answer.push_back(bfs(i, j) + 1);
			}
		}
	}

	sort(answer.begin(), answer.end());
	cout << answer.size() <<
		'\n';
	for (auto i : answer) {
		cout << i << ' ';
	}
}