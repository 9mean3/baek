#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct comp {
	bool operator()(int a, int b) {
		if (abs(a) != abs(b))
			return abs(a) > abs(b);
		else
			return a > b;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, comp> pq;
	int n;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		if (x != 0)
			pq.push(x);
		else {
			//cout << "출력: ";
			if (!pq.empty()) {
				cout << pq.top();
				pq.pop();
			}
			else
				cout << 0;
			cout << '\n';
		}
	}
}