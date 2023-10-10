#include<iostream>
#include<map>

using namespace std;

map<int, pair<int, int>> tree;
int p[100001] = { 0, };

int lastone;

int cnt = 0;

void inorder(int node) {
	if (node == -1) return;
	inorder(tree[node].first);
	lastone = node;
	inorder(tree[node].second);
}

void SimilarityIn(int node) {
	if (tree[node].first != -1 && p[tree[node].first] == 0) {
		p[tree[node].first] = node;

		SimilarityIn(tree[node].first);
	}
	else if (tree[node].second != -1 && p[tree[node].second] == 0) {
		p[tree[node].second] = node;

		SimilarityIn(tree[node].second);
	}
	else if (node == lastone) {
		return;
	}
	else {
		SimilarityIn(p[node]);
	}
	cnt++;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int v, l, r;
		cin >> v >> l >> r;
		tree[v] = { l, r };
	}
	inorder(1);
	SimilarityIn(1);
	cout << cnt;
}