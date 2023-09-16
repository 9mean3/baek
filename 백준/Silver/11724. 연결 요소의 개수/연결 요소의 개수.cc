#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<sstream>
using namespace std;

vector<int> board[1001];
bool visited[1001];

void DFS(int n) {
	visited[n] = true;
	for (int i = 0; i < board[n].size(); i++)
	{
		int v = board[n][i];
		if (visited[v] == false) {
			DFS(v);
		}
	}
}

int main() {

	int n, m;
	std::cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		std::cin >> a >> b;
		board[a].push_back(b);
		board[b].push_back(a);
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == false) {
			DFS(i);
			cnt++;
		}
	}
	std::cout << cnt;
}