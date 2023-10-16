#include<iostream>
using namespace std;


int n, m;
int arr[9];
bool isused[9];

void f(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = true;
			f(k + 1);
			isused[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;
	f(0);
}