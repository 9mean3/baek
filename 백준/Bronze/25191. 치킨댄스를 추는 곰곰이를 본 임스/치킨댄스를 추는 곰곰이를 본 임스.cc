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
	int n, a, b;
	cin >> n >> a >> b;
	int count = 0;
	
	int cb = (a / 2) + b;
	if (cb > n)
		count = n;
	else
		count = cb;

	cout << count;
}