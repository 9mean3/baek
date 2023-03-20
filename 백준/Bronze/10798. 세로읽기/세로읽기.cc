#include<iostream>
#include<string>
using namespace std;

int main() {
	string bogwan;
	char arr[5][15] = { '\0' };

	for (int i = 0; i < 5; i++)
	{
		cin >> bogwan;
		for (int j = 0; j < bogwan.size(); j++)
		{
			arr[i][j] = bogwan[j];
		}
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j][i] == '\0')
				continue;
			cout << arr[j][i];
		}
	}
}