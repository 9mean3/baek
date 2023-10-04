#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;


int main()
{
	string input;
	int arr[26] = { 0, };
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		arr[input[i] - 97]++;;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}
}