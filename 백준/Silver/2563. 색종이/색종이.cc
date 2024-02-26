#include<iostream>
using namespace std;

int board[101][101] = {0,};

int main(){
    int n, by = 0;
	cin >> n;
	for (int idx = 0; idx < n; idx++)
	{
		int a, b;
		cin >> a >> b;

		for (int i = a; i < a + 10; i++)
		{
			for (int j = b; j < b + 10; j++)
			{
				if (!board[i][j]) {
					board[i][j] = 1;
					by++;
				}
			}
		}

	}

	cout << by;
}