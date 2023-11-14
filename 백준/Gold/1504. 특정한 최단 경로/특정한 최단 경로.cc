#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include <unordered_set>

using namespace std;

const int INF = 100000000;
vector<pair<int, int>> adj[1001];
int d[1001];
int n;

void dik(int x) {
	fill(d, d + n + 1, INF);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	d[x] = 0;
	pq.push({ d[x], x });
	while (!pq.empty())
	{
		auto cur = pq.top(); pq.pop();
		if (d[cur.second] != cur.first) continue;
		for (auto next : adj[cur.second])
		{
			if (d[next.second] <= d[cur.second] + next.first) continue;
			d[next.second] = d[cur.second] + next.first;
			pq.push({ d[next.second], next.second });
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int e;
	cin >> n >> e;
	for (int i = 0; i < e; i++)
	{
		int	a, b, h;
		cin >> a >> b >> h;
		adj[a].push_back({ h,b });
		adj[b].push_back({ h,a });
	}
	int v1, v2;
	cin >> v1 >> v2;

	dik(1);
	int stov1 = d[v1];
	int stov2 = d[v2];

	dik(v1);
	int v1ton = d[n];
	int v1tov2 = d[v2];

	dik(v2);
	int v2ton = d[n];

	int v1result = stov1 + v1tov2 + v2ton;
	int v2result = stov2 + v1tov2 + v1ton;

	int result = v1result < v2result ? v1result : v2result;
	if (result >= INF || v1tov2 == INF) cout << "-1" ;
	else
		cout << result;
}