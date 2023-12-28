#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	cin >> n;
	int input;
	vector<int> answer;
	while (n--)
	{
		cin >> input;
		if (input == 0) {
			if (!pq.empty()) {
				answer.push_back(pq.top());
				pq.pop();
			}
			else
				answer.push_back(0);
		}
		else {
			pq.push(input);
		}
	}

	for (auto i : answer)
	{
		cout << i << '\n';
	}
}