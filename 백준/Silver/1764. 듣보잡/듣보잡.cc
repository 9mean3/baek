#include<iostream>
#include<map>
using namespace std;
int main() {
	map<string, int> dbhuman;
	
	string input;
	int n, m, i=0;
	cin >> n >>m;
	for (int idx = 0; idx < n + m; idx++)
	{
		cin >> input;
		dbhuman[input]++;
		if (dbhuman[input] >= 2) i++;
	}
	cout << i << '\n';
	for (auto it : dbhuman) {
		if (it.second >= 2)cout << it.first << '\n';
	}	
}