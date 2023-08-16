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
    ios::sync_with_stdio(false);
	int n;
	map<int, int> cards;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		cards[input]++;
	}

	int m;
	cin >> m;
	int* arr = new int[m];
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		arr[i] = input;
	}

	for (int i = 0; i < m; i++)
	{
		cout << cards[arr[i]] << ' ';
	}
}