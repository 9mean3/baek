#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	int te, ts, tm;
	cin >> te >> ts >> tm;

	int e = 1, s = 1, m = 1;
	int year = 1;
	while (te != e || ts != s || tm != m) {
		if (e == te && s == ts && m == tm) break;
		year++;
		e++; s++; m++;
		if (e > 15)
			e = 1;
		if (s > 28)
			s = 1;
		if (m > 19)
			m = 1;
	}
	cout << year;
}