#include<iostream>
#include<queue>
using namespace std;

const int INF = 2000000000;
vector<pair<int, int>> adj[1001];
int d[1001];
int board[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	fill(d, d + n + 1, INF);
	while (m--)
	{
		int a, b, w;
		cin >> a >> b >> w;
		adj[a].push_back({ w, b });
		//adj[b].push_back({ w, a });
	}
	int a, b;
	cin >> a >> b;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	d[a] = 0;
	pq.push({ d[a], a });
	while (!pq.empty())
	{
		auto cur = pq.top();
		pq.pop();
		if (d[cur.second] != cur.first) continue;
		for (auto next : adj[cur.second]) {
			if (d[next.second] <= d[cur.second] + next.first) continue;

			d[next.second] = d[cur.second] + next.first;
			pq.push({ d[next.second], next.second });
		}
	}

	cout << d[b];
}