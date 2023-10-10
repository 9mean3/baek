#include<iostream>
#include<vector>
using namespace std;

vector<int> adj[100001];
int score[100001] = { 0, };
int p[100001] = { 0, };

void dfs(int number) {
	if (p[number] != -1)
		score[number] += score[p[number]];
	for (auto i : adj[number])
	{
		dfs(i);
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i];
		if (p[i] == -1) continue;
		adj[p[i]].push_back(i);
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		score[a] += b;
	}
	dfs(1);
	for (int i = 1; i <= n; i++)
	{
		cout << score[i] << ' ';
	}
}