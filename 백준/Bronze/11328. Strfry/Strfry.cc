#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str, strf;
		cin >> str >> strf;
		bool isf = false;
		for (auto i : str)
		{
			if (strf.find(i) != -1) {
				strf.erase(strf.find(i), 1);
			}
			else
				isf = true;
		}
		if (strf.size() > 1)
			isf = true;

		if (isf)
			cout << "Impossible\n";
		else
			cout << "Possible\n";
	}
}