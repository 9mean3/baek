#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
int n;
	cin >> n;
	stack<int> wait;
	queue<int> line;
	bool isf = false;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		line.push(input);
	}
	int curN = 1;
	while (!line.empty())
	{
		//cout << line.front();
		if (line.front() == curN) {
			curN++;
			line.pop();
		}
		else if (!wait.empty()&&wait.top() == curN) {
			curN++;
			wait.pop();
		}
		else {
			wait.push(line.front());
			line.pop();
		}
	}

	while (!wait.empty())
	{
		if (wait.top() == curN) {
			wait.pop();
			curN++;
		}
		else {
			isf = true;
			break;
		}
	}

	if (!isf)
		cout << "Nice" << endl;
	else
		cout << "Sad" << endl;
}