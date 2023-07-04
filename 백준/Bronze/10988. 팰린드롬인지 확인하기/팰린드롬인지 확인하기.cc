#include<iostream>
using namespace std;

int main(){
    	int isf = 1;
	string input;
	cin >> input;
	for (int i = 0; i < input.size() / 2; i++)
	{
		if (input[i] != input[input.size() - i - 1]) {
			isf = 0;
		}
	}

	cout << isf;
}