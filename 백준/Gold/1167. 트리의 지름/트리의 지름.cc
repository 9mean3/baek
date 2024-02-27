#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> board[100001];

int maxDistance = -1, maxNode = 0;
int visited[100001] = { 0 };

void dfs(int node, int distance) {
	//if (visited[node]) return;
	visited[node] = 1;

	if (distance > maxDistance) {
		maxDistance = distance;
		maxNode = node;
	}

	for (int i = 0; i < board[node].size(); i++)
	{
		if (!visited[board[node][i].first])
			dfs(board[node][i].first, distance + board[node][i].second);
	}
}

int main() {
	cin >> n;
	for (int idx = 0; idx < n; idx++)
	{		
		int nodeA;
		cin >> nodeA;
		while (true)
		{
			int nodeB, distance;
			cin >> nodeB;
			if (nodeB == -1) break;
			cin >> distance;
			board[nodeA].push_back({ nodeB, distance });
			board[nodeB].push_back({ nodeA, distance });
		}
	}

	dfs(1, 0);
	memset(visited, 0, sizeof(visited));
	maxDistance = 0;
	dfs(maxNode, 0);

	cout << maxDistance;
}