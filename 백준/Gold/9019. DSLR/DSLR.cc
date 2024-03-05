#include<iostream>
#include<queue>
#include<string.h>
using namespace std;

int n, a, b;
bool visited[10001];
string anscmd;

void func(int aValue) {
	queue<pair<int, string>> q;
	q.push({ aValue, "" });

	while (!q.empty()) {
		int value = q.front().first;
		string cmd = q.front().second;
		int nValue;
		if (value == b) {
			anscmd = cmd;
			return;
		}

		q.pop();

		nValue = value * 2 < 10000 ? value * 2 : value * 2 % 10000;
		if (!visited[nValue]) {
			q.push({ nValue, cmd + 'D' });
			visited[nValue] = true;
		}
		nValue = value > 0 ? value - 1 : 9999;
		if (!visited[nValue]) {
			q.push({ nValue, cmd + 'S' });
			visited[nValue] = true;
		}
		nValue = (value % 1000) * 10 + value / 1000;
		if (!visited[nValue]) {
			q.push({ nValue, cmd + 'L' });
			visited[nValue] = true;
		}
		nValue = (value % 10) * 1000 + value / 10;
		if (!visited[nValue]) {
			q.push({ nValue, cmd + 'R' });
			visited[nValue] = true;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		memset(visited, 0, 10000 * sizeof(bool));
		func(a);
		cout << anscmd << endl;
	}
}