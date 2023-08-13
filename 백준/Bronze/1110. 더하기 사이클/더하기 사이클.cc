#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	int number = n;
	while (true)
	{
		cnt++;
		number = 10*(number%10)+((number / 10) + (number % 10)) % 10;
			//cout <<"newIntis " << number << endl;
		

		if (number == n)
			break;
	}
	cout << cnt;
}