#include<iostream>
#include<vector>
using namespace std;

vector<int> adj[100001];
int p[100001] = { 0, };
int cnt[100001] = { 0, };

void dfs(int curnode) {
	//cout << curnode;
	cnt[curnode]++;
	for (auto i : adj[curnode])
	{
		//cnt[curnode]++;
		if (i == p[curnode]) continue;
		p[i] = curnode;
		dfs(i);
		cnt[curnode] += cnt[i];
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int N, R, Q;
	cin >> N >> R >> Q;
	for (int i = 1; i < N; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(R);	
	for (int i = 0; i < Q; i++)
	{
		int q;
		cin >> q;
		cout << cnt[q] << '\n';
	}
}