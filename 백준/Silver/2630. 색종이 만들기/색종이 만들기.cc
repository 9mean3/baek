#include<iostream>

using namespace std;

int arr[129][129];
int whiteCnt = 0, colorCnt = 0;

void func(int x, int y, int size) {
	int tCnt = 0;
	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (arr[i][j] == 1) tCnt++;
		}
	}

	if (tCnt == 0)
	{
		whiteCnt++;
	}
	else if (tCnt == size * size)
	{
		colorCnt++;
	}
	else {
		func(x, y, size / 2);
		func(x + size / 2, y, size / 2);
		func(x, y + size / 2, size / 2);
		func(x + size / 2, y + size / 2, size / 2);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	func(0, 0, n);

	cout << whiteCnt << endl;
	cout << colorCnt;
}