#include<iostream>
#include<vector>
#include<set>
#include<stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	stack<int> s;
	stack<int> answer;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		//s.push(input);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		//cout << "i = " << i << endl;


		//int max = -1;
		while (!s.empty() && s.top() <= arr[i]) {
			//if (s.top() > v[i]) max = s.top();
			s.pop();
		}
		//answer.push(max);
		if (s.empty())answer.push(-1);
		else {
			answer.push(s.top());
		}

		s.push(arr[i]);
	}
	//cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << answer.top() << ' ';
		answer.pop();
	}
}