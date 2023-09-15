#include <string>
#include <vector>
#include <queue>

using namespace std;

int rn;
vector<vector<int>> board;
int visited[201] = { 0, };
int answer = 0;

void DFS(int a) {
	visited[a] = 1;

	for (int i = 0; i < rn; i++)
	{
		if (board[a][i] == 1 && visited[i] == 0) {
			DFS(i);
		}
		//else if()
	}
}

int solution(int n, vector<vector<int>> computers) {
	rn = n;
	board = computers;
	for (int i = 0; i < n; i++)
	{
		if (visited[i] == 0) {
			DFS(i);
			++answer;
		}
	}
	return answer;
}