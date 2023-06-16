#include<iostream>
#include<map>

using namespace std;

int main() {
	map<string, int> books;
	int max = -1;
	string maxBook;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string input;
		cin >> input;
		books[input]++;
	}
	for (auto i : books)
	{
		//cout << i.first << ' ' << i.second << endl;
		if (i.second > max) {
			max = i.second;
			maxBook = i.first;
		}
	}
	cout << maxBook;
}