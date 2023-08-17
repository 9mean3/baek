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
	map<string, int> m;
	int befEnter = -1;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		if (input == "ENTER")
			m.clear();
		else {
			if (m[input] == 0) {
				count++;
				m[input]++;
			}
		}
		
	}
	cout << count;
}