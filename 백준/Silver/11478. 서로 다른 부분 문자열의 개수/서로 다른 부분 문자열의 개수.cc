#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<string> set;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		string m;
		for (int j = i; j < s.length(); j++)
		{
			m += s[j];
			set.insert(m);
		}
	}

	cout << set.size();
}