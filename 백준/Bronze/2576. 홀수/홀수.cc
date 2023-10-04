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
	int min = 101;
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		int input;
		cin >> input;
		if (input % 2 != 0) {
			sum += input;
			if (input < min) min = input;
		}
	}
    	if (sum > 0)
		cout << sum << endl << min;
	else
		cout << -1;
}