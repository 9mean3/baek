#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> board[10001];
int visited[10001] = { 0, };

int maxLength = -1;
int maxNode = -1;

void dfs(int node, int l) {
	visited[node] = 1;

	if (l > maxLength) {
		maxNode = node;
		maxLength = l;
	}

	for (int i = 0; i < board[node].size(); i++) {
		if (visited[board[node][i].first]) {
			continue;
		}
		dfs(board[node][i].first, l + board[node][i].second);
	}
}

int main() {
	int n;
	cin >> n;
	int a, b, w;
	for (int i = 0; i < n - 1; i++) {
		cin >> a >> b >> w;
		board[a].push_back({ b, w });
		board[b].push_back({ a, w });
	}

	dfs(1, 0);

	for (int i = 0; i <= n; i++)
	{
		visited[i] = 0;
	}
	maxLength = -1;
	dfs(maxNode, 0);

	cout << maxLength;
}