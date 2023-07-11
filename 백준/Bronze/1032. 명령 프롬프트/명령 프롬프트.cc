#include<iostream>
#include<vector>
using namespace std;
int main(){
    	vector<string> v;
	string answer;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		v.push_back(input);
	}

	bool flag;
	int j;
	for (int i = 0; i < v[0].size(); i++)
	{
		flag = false;
		for (j = 0; j < v.size() - 1; j++)
		{
			if (v[j][i] != v[j + 1][i]) {
				flag = true;
			}
		}
		if (flag)
			answer.push_back('?');
		else
			answer.push_back(v[j][i]);
	}
	cout << answer;

}