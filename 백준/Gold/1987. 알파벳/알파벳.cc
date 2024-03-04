#include<iostream>
using namespace std;

int r, c;
int board[21][21] = { 0, };
int maxCnt = -1;
bool visited[27] = { 0, };
int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };

void func(int x, int y, int cnt) {
	if (cnt > maxCnt) maxCnt = cnt;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < r && ny < c) {
			if (!visited[board[nx][ny]]) {
				visited[board[nx][ny]] = true;
				func(nx, ny, cnt + 1);
				visited[board[nx][ny]] = false;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string line;

	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		cin >> line;
		for (int j = 0; j < c; j++)
		{
			board[i][j] = line[j] - 'A';
		}
	}

	visited[board[0][0]] = true;
	func(0, 0, 1);

	cout << maxCnt;
}