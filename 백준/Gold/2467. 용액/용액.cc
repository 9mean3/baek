#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>

#include<algorithm>//

#include<sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr[i] = input;
	}

	int l = 0;
	int r = n - 1;
	int min = 2147483647;
	int ml = 0;
	int mr = n - 1;
	while (l < r && l < n)
	{
		//bool flag = false;
		int y = arr[l] + arr[r];
		if (y < 0) {
			y *= -1;
			//flag = true;
		}
		if (y < min) {
			min = y;
			ml = l;
			mr = r;
		}

		if (arr[l] + arr[r] > 0)
			r--;
		else if (arr[l] + arr[r] < 0)
			l++;

		if (y == 0) {
			break;
		}
	}
	cout << arr[ml] << ' ' << arr[mr];
}