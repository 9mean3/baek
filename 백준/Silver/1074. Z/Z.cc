#include<iostream>

using namespace std;

int r, c;
int answer;

void func(int x, int y, int size) {
	if (x == c && y == r) {
		cout << answer;
		return;
	}
	
	if (c < x + size && c >= x && r < y + size && r >= y) {
		func(x, y, size / 2);
		func(x + size / 2, y, size / 2);
		func(x, y + size / 2, size / 2);
		func(x + size / 2, y + size / 2, size / 2);
	}
	else {
		answer += size * size;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n >> r >> c;
	func(0,0,1 << n);
}