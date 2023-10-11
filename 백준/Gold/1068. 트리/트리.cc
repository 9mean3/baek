#include<iostream>
#include<vector>
using namespace std;

vector<int> adj[51];
int p[51] = { 0, };
int n;
int delN;
int cnt = 0;

void dfs(int number) {
	bool isf = true;
	for (auto i : adj[number])
	{
		if (i == p[number] || i == delN) continue;
		isf = false;
		dfs(i);
	}
	if (isf) cnt++;
}

int main()
{
	cin >> n;
	int root;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		if (p[i] == -1) { root = i; continue; }
		adj[p[i]].push_back(i);
	}
	cin >> delN;
    	if (delN == root) {
		cout << 0;
		return 0;
	}
	dfs(root);
	cout << cnt;

}