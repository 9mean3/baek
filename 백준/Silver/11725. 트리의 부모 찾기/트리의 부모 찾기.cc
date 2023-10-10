#include<iostream>
#include<vector>

using namespace std;

int n;
vector<int> adj[100001];
int p[100001];

void dfs(int number) {
	
	for (auto i : adj[number])
	{
		if (i == p[number]) continue;
		p[i] = number;
		dfs(i);
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(1);
	for (int i = 2; i <= n; i++)
	{
		cout << p[i] << "\n";
	}
}