#include<iostream>
#include<vector>
using namespace std;

int main(){
    	vector<int> stack;
	int t, n;
	string input;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		if (input == "push") {
			cin >> n;
			stack.push_back(n);
		}
		else if (input == "pop") {
			if (stack.size() > 0) {
				cout << stack[stack.size() - 1] << "\n";
				stack.pop_back();
			}
			else
				cout << -1 << "\n";
		}
		else if (input == "size") {
			cout << stack.size() << "\n";
		}
		else if (input == "empty") {
			if (stack.size() < 1)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (input == "top") {
			if (stack.size() > 0)
				cout << stack[stack.size() - 1] << "\n";
			else
				cout << -1 << "\n";
		}
	}
}