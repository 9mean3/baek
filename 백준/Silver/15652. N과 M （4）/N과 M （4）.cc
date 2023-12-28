#include<iostream>

using namespace std;

int n, m;
int arr[9] = { 0, };
bool used[9] = { 0, };

void func(int number, int size) {
	if (size == m) {
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << endl;
		return;
	}

	for (int i = number; i <= n; i++)
	{
		used[i] = true;
		arr[size] = i;
		func(i, size + 1);
		used[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	func(1, 0);
}