#include<iostream>
#include<set>
using namespace std;
    int main() {
	set<int> sanggeun;

	int t, input;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		sanggeun.insert(input);
	}

	cin >> t;
	int* arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		if (sanggeun.find(input) != sanggeun.end()) {
			arr[i] = 1;
			continue;
		}
			arr[i] = 0;
	}

	for (int i = 0; i < t; i++)
	{
		cout << arr[i] << ' ';
	}

	delete[] arr;
}