#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;


#define Max 100001
int visited[Max] = { 0, };
int m;

void BFS(int v) {
	queue<int> q;
	q.push(v);
	visited[v] = 0;

	while (!q.empty())
	{
		int w = q.front();
		q.pop();
        if (w == m) {
			break;
		}

		if (visited[w + 1] == 0 && w + 1 >= 0 && w + 1 < Max) {
			q.push(w + 1);
			visited[w + 1] = visited[w] + 1;
		}
		if (visited[w - 1] == 0 && w - 1 >= 0 && w - 1 < Max) {
			q.push(w - 1);
			visited[w - 1] = visited[w] + 1;
		}
		if (visited[w * 2] == 0 && w * 2 >= 0 && w * 2 < Max) {
			q.push(w * 2);
			visited[w * 2] = visited[w] + 1;
		}

		
	}
}

int main()
{
	int n;
	cin >> n >> m;

	BFS(n);
	cout << visited[m];
}