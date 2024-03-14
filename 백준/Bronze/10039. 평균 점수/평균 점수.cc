#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 0;
	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		if (input < 40)
		{
			answer += 40;
			continue;
		}
		answer += input;
	}
	cout << answer / 5;
}