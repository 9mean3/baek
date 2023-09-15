#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<sstream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr[10] = { 0, };
	while (n > 0)
	{
		arr[n % 10]++;
		n /= 10;
	}
	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		int ckI;
		if (i == 6 || i == 9) {
			if ((arr[6] + arr[9]) % 2 == 0)
				ckI = (arr[6] + arr[9]) / 2;
			else
				ckI = ((arr[6] + arr[9]) / 2) + 1;
			if (ckI > cnt)
				cnt = ckI;
		}
		else {
			ckI = arr[i];
			if (ckI > cnt)
				cnt = ckI;
		}
	}
	cout << cnt;
}