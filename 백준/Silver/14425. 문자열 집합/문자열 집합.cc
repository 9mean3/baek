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
	int n, m;
	map<string, int> s;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		s[input]++;
	}

	int count = 0;
	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		if (s[input] >= 1)
			count++;
	}

	cout << count;
}