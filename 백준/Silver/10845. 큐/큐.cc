#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> qu;
	string input;
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		if (input == "push") {
			cin >> n;
			qu.push_back(n);
		}
		if (input == "pop") {
			if (qu.size() > 0) {
				cout << qu[0] << "\n";
				qu.erase(qu.begin());
			}
			else
				cout << -1 << "\n";
		}
		if (input == "size") {
				cout << qu.size() << "\n";
		}
		if (input == "empty") {
			if (qu.size() > 0)
				cout << 0 << "\n";
			else
				cout << 1 << "\n";
		}
		if (input == "front") {
			if (qu.size() > 0)
				cout << qu[0] << "\n";
			else
				cout << -1 << "\n";
		}
		if (input == "back") {
			if (qu.size() > 0)
				cout << qu[qu.size() - 1] << "\n";
			else
				cout << -1 << "\n";
		}
	}
}