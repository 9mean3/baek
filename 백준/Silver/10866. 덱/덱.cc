#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> deque;
int t, iInp;
string input;
cin >> t;
for (int i = 0; i < t; i++)
{
	cin >> input;
	if (input == "push_back") {
		cin >> iInp;
		deque.push_back(iInp);
	}
	else if (input == "push_front") {
		cin >> iInp;
		deque.insert(deque.begin(), iInp);
	}
	else if (input == "pop_front") {
		if (!deque.empty()) {
			cout << deque[0] << endl;
			deque.erase(deque.begin());
		}
		else
			cout << -1 << endl;
	}
	else if (input == "pop_back") {
		if (!deque.empty()) {
			cout << deque.back() << endl;
			deque.erase(deque.end()-1);
		}
		else
			cout << -1 << endl;
	}
	else if (input == "size") {
		cout << deque.size() << endl;
	}
	else if (input == "empty") {
		cout << deque.empty()<< endl;
	}
	else if (input == "front") {
		if (!deque.empty()) {
			cout << deque.front() << endl;
		}
		else
			cout << -1 << endl;
	}
	else if (input == "back") {
		if (!deque.empty()) {
			cout << deque.back() << endl;
		}
		else
			cout << -1 << endl;
	}
}
}