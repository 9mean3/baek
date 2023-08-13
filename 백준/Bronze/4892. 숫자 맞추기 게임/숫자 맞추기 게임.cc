#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	int cnt = 0;
	while (true)
	{
		cnt++;

		int n;
		int odev;
		cin >> n;

		if (n == 0)break;

		n = 3 * n;
		if (n % 2 == 0) {
			odev = 0;
			n = n / 2;
		}
		else {
			odev = 1;
			n = (n + 1) / 2;
		}
		n = 3 * n;
		n = n / 9;
		int n4 = n;

		cout << cnt << ". ";
		if (odev) cout << "odd ";
		else cout << "even ";
		cout << n4 << endl;

		//if (n % 2 == 0)
		//	n = n / 2;
		//else
		//	n = (n + 1) / 2;
	}
}