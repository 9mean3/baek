#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	string isbn = "9780921418";

	for (int i = 0; i < 3; i++)
	{
		char input;
		cin >> input;
		isbn += input;
	}
	//cout << isbn << endl;
	int sum = 0;
	for (int i = 0; i < isbn.size(); i++)
	{
		if (i % 2 == 0)
			sum += (isbn[i] - '0') * 1;
		else
			sum += (isbn[i] - '0') * 3;
	}
	cout << "The 1-3-sum is " << sum;
}