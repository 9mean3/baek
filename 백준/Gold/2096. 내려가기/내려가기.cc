#include <iostream>
#include <vector>
using namespace std;

int maxDP[3] = { 0, };
int minDP[3] = { 0, };

int main() {
	int n;
	int a, b, c;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c;
		int t0 = maxDP[0], t2 = maxDP[2];
		maxDP[0] = max(maxDP[0], maxDP[1]) + a;
		maxDP[2] = max(maxDP[1], maxDP[2]) + c;
		maxDP[1] = max(t0, max(maxDP[1], t2)) + b;

		t0 = minDP[0]; t2 = minDP[2];
		minDP[0] = min(minDP[0], minDP[1]) + a;
		minDP[2] = min(minDP[1], minDP[2]) + c;
		minDP[1] = min(t0, min(minDP[1], t2)) + b;
	}

	cout << max(maxDP[0], max(maxDP[1], maxDP[2])) << ' ';
	cout << min(minDP[0], min(minDP[1], minDP[2]));
}