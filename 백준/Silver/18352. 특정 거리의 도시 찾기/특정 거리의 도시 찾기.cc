#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>

using namespace std;


int main()
{
	int N, M, K, X;
	vector<int> visited;
	vector<int> answer;
	vector<vector<int>> adj;
	cin >> N >> M >> K >> X;
	adj.resize(N + 1);
	visited.resize(N + 1, -1);

	int n1, n2;
	for (int i = 0; i < M; i++)
	{
		cin >> n1 >> n2;
		adj[n1].push_back(n2);
	}

	queue<int> q;
	q.push(X);
	visited[X] = 0;
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		for (int j = 0; j < adj[now].size(); j++)
		{
			int next = adj[now][j];
			if (visited[next] == -1) {
				q.push(next);
				visited[next] = visited[now] + 1;
				if (visited[next] == K) answer.push_back(next);
			}
		}
	}

	sort(answer.begin(), answer.end());
	if (answer.empty())
		cout << "-1";
	else
		for (int i = 0; i < answer.size(); i++)
		{
			cout << answer[i] << endl;
		}
}