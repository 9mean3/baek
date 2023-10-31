#include<iostream> 
#include<vector>
using namespace std;

int n, m;
vector<int> board[2001];
bool used[2001] = {0,};
bool answer = false;

void func(int n, int length) {
	if (length >= 4) {answer = true; return;}
	used[n] = true;
	length++;
	for (auto i : board[n]) {
		if (!used[i]) {
			func(i, length);
		}
	}
	used[n] = false;
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		board[a].push_back(b);
		board[b].push_back(a);
	}

	for (int i = 0; i < n; i++)
	{
		func(i, 0);
		if (answer) {
			cout << 1;
			return 0;
		}
	}
	cout << 0;
}