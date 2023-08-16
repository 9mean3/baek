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
	map<long long, int> m;
	int max = -1;
	long long midx = -1;
	for (int i = 0; i < n; i++)
	{
		long long input;
		cin >> input;
		m[input]++;
		if (max == m[input]) {
			if (midx > input) {
				max = m[input];
				midx = input;
			}
		}
		else if (max < m[input]) {
			max = m[input];
			midx = input;
		}
	}
    	cout << midx;

}