#include <iostream>
#include <stack>
using namespace std;

int main(){
string input;
stack<char> rhkfgh;

while (true)
{
	bool fuck = false;
	getline(cin, input);
	if (input.size() == 1 && input[0] == '.')
		return 0;
	for (int i = 0; i < input.size(); i++)
	{
		if (rhkfgh.empty() && (input[i] == ')' || input[i] == ']')) {
			fuck = true;
			break;
		}

		switch (input[i])
		{
		case'(':
		case'[':
			rhkfgh.push(input[i]);
			break;

		case')':
			if (rhkfgh.top() == '(') {
				rhkfgh.pop();
			}
			else fuck = true;
			break;
		case']':
			if (rhkfgh.top() == '[') {
				rhkfgh.pop();
			}
			else fuck = true;
			break;
		default:
			break;
		}
	}

	if (fuck || !rhkfgh.empty())
		cout << "no\n";
	else
		cout << "yes\n";

	while (!rhkfgh.empty())
	{
		rhkfgh.pop();
	}
}
}