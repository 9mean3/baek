#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n, max = -1;
		string king;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			string s;
			int l;
			cin >> s >> l;
			if (l > max) {
				max = l;
				king = s;
			}
		}
		cout << king << endl;
	}
}