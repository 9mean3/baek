#include<iostream>
#include<stack>
using namespace std;

int main(){
    	stack<char> good;
	string input;
	int t, s=0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		for (int i = 0; i < input.size(); i++)
		{
			if (good.empty() || good.top() != input[i])
				good.push(input[i]);
			else if (good.top() == input[i])
				good.pop();

		}
		if (good.empty())
			s++;
		while (!good.empty())
			good.pop();
	}
	cout << s;
}