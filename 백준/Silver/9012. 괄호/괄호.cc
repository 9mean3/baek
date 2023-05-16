#include<iostream>
#include<stack>
using namespace std;

int main(){
    	int t;
	bool answer = true;
	stack<char> sc = {};
	string s;
	cin >> t;
	for (int idx = 0; idx < t; idx++)
	{
		cin >> s;
		answer = true;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				sc.push('(');
			}
			else if (s[i] == ')') {
				if (!sc.empty()/* && sc.top() == '('*/) {
					sc.pop();
				}
				else
					answer = false;
			}
		}
		if (!sc.empty())
			answer = false;

		if (answer)
			cout << "YES\n";
		else
			cout << "NO\n";


		while (!sc.empty()) // 스택 초기화
			sc.pop();
	}
}