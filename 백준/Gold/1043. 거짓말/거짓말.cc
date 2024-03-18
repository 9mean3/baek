#include<iostream>
#include<vector>
using namespace std;

vector<int> knownPeople;
vector<int> board[51];
int p[51] = { 0, };

int Find(int n) {
	if (n == p[n]) return n;
	return p[n] = Find(p[n]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	p[a] = b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, m;
	cin >> n >> m;
	for (int i = 0; i <= n; i++)
	{
		p[i] = i;
	}
	int knwnN;
	cin >> knwnN;
	while (knwnN--)
	{
		int k;
		cin >> k;
		knownPeople.push_back(k);
	}

	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			int v;
			cin >> v;
			board[i].push_back(v);
			if (j > 0) {
				Union(board[i][j - 1], v);
			}
		}
	}

	int answer = m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			bool f = false;
			for (int k = 0; k < knownPeople.size(); k++)
			{
				if (Find(board[i][j]) == Find(knownPeople[k])) {
					f = true;
				}
			}
			if (f) {
				answer--;
				break;
			}
		}
	}

	cout << answer;
}