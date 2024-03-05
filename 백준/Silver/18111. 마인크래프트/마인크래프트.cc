#include<iostream>
using namespace std;

int N, M, B;
int t = 200000000, h = -1;
int board[501][501] = { 0, };
int maxH = -1, minH = 200000000;

void Leveling(int height) {
	int putInv = 0, putGrd = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (board[i][j] > height) {
				putInv += board[i][j] - height;
			}
			else if (board[i][j] < height) {
				putGrd += height - board[i][j];
			}
		}
	}



	if (B + putInv >= putGrd) {
		int totalTime = (putInv * 2) + putGrd;
		if (totalTime <= t) {
			t = totalTime;
			h = max(h, height);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> B;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int input;
			cin >> input;
			board[i][j] = input;
			if (input > maxH) maxH = input;
			if (input < minH) minH = input;
		}
	}

	for (int i = minH; i <= maxH; i++)
	{
		Leveling(i);
	}

	cout << t << ' ' << h;
}