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
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    
	int n, m;
	map<string, string> p;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string inputsite, inputpswd;
		cin >> inputsite >> inputpswd;
		p[inputsite] = inputpswd;
	}

	int count = 0;
	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		cout << p[input] << '\n';
	}
}