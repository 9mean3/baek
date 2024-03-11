#include<iostream>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    	queue<int> qu;
	int n;
	int inn;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;

		if (input == "push") {
			cin >> inn;
			qu.push(inn);
		}
		else if (input == "pop") {
			if (!qu.empty()) {
				cout << qu.front() << '\n';
				qu.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (input == "size") {
			cout << qu.size() << '\n';
		}
		else if (input == "empty") {
			cout << qu.empty() << '\n';
		}
		else if (input == "front") {
			if (!qu.empty()) {
				cout << qu.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (input == "back") {
			if (!qu.empty()) {
				cout << qu.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}
}