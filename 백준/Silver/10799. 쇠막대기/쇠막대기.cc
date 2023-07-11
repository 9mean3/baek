#include<iostream>
#include<stack>
using namespace std;

int main(){	
    stack<char> s;
	string input;
	int count = 0;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '(' && input[i + 1] != ')') {
			s.push('(');
		}
		else if (input[i] == ')' && input[i - 1] == '(') {
			count += s.size();
		}
		else if (input[i] == ')' && input[i - 1] != '(') {
			s.pop();
			count += 1;
		}
	}
	cout << count;
}