#include<iostream>
#include<queue>
using namespace std;
const int INF = 2000000000;
vector<pair<int, int>> adj[20005];
int d[20005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int v, e, start;
	cin >> v >> e >> start;
	fill(d, d + v + 1, INF);

	while (e--)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({ w,v });
	}
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	d[start] = 0;
	pq.push({ d[start], start });
	while (!pq.empty()) {
		auto cur = pq.top();
		pq.pop();
		if (d[cur.second] != cur.first) continue;
		for (auto next : adj[cur.second])
		{
			if (d[next.second] <= d[cur.second] + next.first)continue;

			d[next.second] = d[cur.second] + next.first;
			pq.push({ d[next.second], next.second });
		}
	}

	for (int i = 1; i <= v; i++)
	{
		if (d[i] == INF) cout << "INF\n";
		else cout << d[i] << "\n";
	}
}