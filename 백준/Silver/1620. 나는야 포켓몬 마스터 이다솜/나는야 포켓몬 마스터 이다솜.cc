#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

cin.tie(NULL);

cout.tie(NULL);
    
	map<int, string> pok;
	map<string, int> ipok;

	string input;
	int t, a;
	cin >> t >> a;
	for (int i = 1; i <= t; i++)
	{
		cin >> input;
		pok[i] = input;
		ipok[input] = i;
	}

	for (int i = 0; i < a; i++)
	{
		cin >> input;
		if (isdigit(input[0])) {
			cout << pok[stoi(input)] << '\n';
		}
		else {
			cout << ipok[input] << '\n';
		}
	}
}