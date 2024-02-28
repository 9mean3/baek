#include <iostream>
using namespace std;

int tri[501][501] = { 0, };

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> tri[i][j];
		}
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
				tri[i][j] += tri[i - 1][j];
			else if(j == i)
				tri[i][j] += tri[i - 1][j - 1];
			else
				tri[i][j] += max(tri[i - 1][j - 1], tri[i - 1][j]);
		}
	}

	int answer = -1;
	for (int i = 0; i < n; i++)
	{
		if (answer < tri[n - 1][i]) answer = tri[n - 1][i];
	}
	cout << answer;
}