#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	vector<int> nrr;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		nrr.push_back(input);
	}

	int m;
	vector<int> mrr;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		mrr.push_back(input);
	}

	sort(nrr.begin(), nrr.end());

	vector<int> answer;
	for (auto i : mrr) {
		vector<int>::iterator iter = upper_bound(nrr.begin(), nrr.end(), i);
		vector<int>::iterator iter1 = lower_bound(nrr.begin(), nrr.end(), i);
		answer.push_back(iter - iter1);
	}

	for (auto i : answer) {
		cout << i << ' ';
	}
}