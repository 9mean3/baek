#include<iostream>
using namespace std;

    int n, m;
int arr[9];
bool isused[9];

void f(int cn, int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = cn; i <= n; i++)
	{
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = true;
			f(i, k + 1);
			isused[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	f(1,0);
}