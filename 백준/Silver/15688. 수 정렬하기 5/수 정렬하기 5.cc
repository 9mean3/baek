#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<sstream>
using namespace std;

int arr[2000002];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr[input+1000000]++;
	}

	for (int i = 0; i < 2000002; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			cout << i - 1000000 << "\n";
		}
	}
}