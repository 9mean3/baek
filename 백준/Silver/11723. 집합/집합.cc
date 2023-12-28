#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m;
	cin >> m;

	string input;
	int v, bit = 0;
	while (m--)
	{
		cin >> input;
		if (input == "add")
		{
			cin >> v;
			bit |= (1 << v);
		}
		else if (input == "remove")
		{
			cin >> v;
			bit &= ~(1 << v);
		}
		else if (input == "check")
		{
			cin >> v;
			if (bit & (1 << v))
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (input == "toggle")
		{
			cin >> v;
			bit ^= (1 << v);
		}
		else if (input == "all")
		{
			bit = (1 << 21) - 1;
		}
		else if (input == "empty")
		{
			bit = 0;
		}
	}
}