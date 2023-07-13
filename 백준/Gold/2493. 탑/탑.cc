#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){	
    int n;
	stack<int> s;
	vector<int> answer;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int h;
		cin >> h;
		s.push(h);
		answer.push_back(0);
	}
	pair<int, int> p;
	stack<pair<int, int>> wjwkdth;

	for (int i = 0; i < n; i++)
	{
		//if (i == 0 || s.top() < wjwkdth.top().second) {
		if (i == 0) {
			wjwkdth.push(make_pair(i, s.top()));
			s.pop();
			continue;
		}
		while (!wjwkdth.empty() && s.top() > wjwkdth.top().second)
		{
			answer[(n - 1) - wjwkdth.top().first] = n - i;
			wjwkdth.pop();
		}
		wjwkdth.push(make_pair(i, s.top()));
		s.pop();
	}

	//int size = answer.size();
	for (int i = 0; i < n; i++)
	{
		cout << answer[i] << ' ';
	}
          }