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

	string s;
	char m[5] = { 'a','i','o','u','e' };
	while (true)
	{
		int cnt = 0;
		getline(cin, s);
		if (s == "#")break;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < s.size(); j++)
			{
				if (s[j] == m[i] || s[j] == char(m[i] - 32)) {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}