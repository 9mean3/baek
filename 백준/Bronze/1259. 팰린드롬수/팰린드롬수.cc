#include<iostream>
using namespace std;
int main(){
    	while (true)
	{
		string input;
		cin >> input;
		if (input == "0") break;
		int l = 0;
		int r = input.size() - 1;
		bool isf = false;
		while (l < r)
		{
			if (input[l] != input[r])
				isf = true;

			l++; r--;
		}

		if (isf)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
}