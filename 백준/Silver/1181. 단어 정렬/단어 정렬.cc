#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;

string arr[20001];

int comp(string a, string b) {
	if (a.size() == b.size())
		return a < b;
	else
		return (a.size() < b.size());
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + n, comp);

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i - 1])
			continue;
		cout << arr[i] << endl;
	}
}