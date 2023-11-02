#include<iostream>
using namespace std;

int parr[100001] = { 0, };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> parr[i];
		parr[i] = parr[i] + parr[i - 1];
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << parr[b] - parr[a-1] << '\n';
	}

}