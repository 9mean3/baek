#include<iostream>
#include <vector>
using namespace std;

vector<int> adj[501];
bool ahShit = true, visited[501];

void dfs(int number, int prev) {
	for (auto i : adj[number])
	{
		if (i == prev)
			continue;
		if (visited[i]) {
			ahShit = false;
			continue;
		}
		visited[i] = true;
		dfs(i, number);
	}
}

int main()
{
	int times = 0;
	while (true)
	{
		int n, m;
		int cnt = 0;
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		for (int i = 1; i <= m; i++)
		{
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}

		for (int i = 1; i <= n; i++)
		{
			if (visited[i]) continue;
			visited[i] = true;
			ahShit = true;
			dfs(i, -1);
			cnt += ahShit;

		}

		times++;
        
		cout << "Case " << times << ": ";
		if (!cnt)
			cout << "No trees." << '\n';
		else if (cnt == 1)
			cout << "There is one tree." << '\n';
		else
			cout << "A forest of " << cnt << " trees." << '\n';
        
		for (int i = 0; i <= n; i++)
		{
			adj[i].clear();
		}
		std::fill_n(visited, 501, false);
	}
}