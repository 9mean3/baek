#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	for (int i = 0; i <3; i++)
	{
		int cnt = 0;
		for (int i = 0; i < 4; i++)
		{
			int input;
			cin >> input;
			cnt += input;
		}
		switch (4-cnt)
		{
		case 0:cout << 'E' << endl;
			break;
		case 1:cout << 'A' << endl;
			break;
		case 2:cout << 'B' << endl;
			break;
		case 3:cout << 'C' << endl;
			break;
		case 4:cout << 'D' << endl;
			break;
		default:
			break;
		}
	}
}