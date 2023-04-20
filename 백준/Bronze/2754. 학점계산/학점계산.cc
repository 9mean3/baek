#include<iostream>
using namespace std;

int main(){
    
string s;
float sum = 0;
cin >> s;

	switch (s[0])
	{
	case 'A':
		sum += 4;
		break;
	case 'B':
		sum += 3;
		break;
	case 'C':
		sum += 2;
		break;
	case 'D':
		sum += 1;
		break;
	default:
		break;
	}

	if (s[0] != 'F') {
		switch (s[1])
		{
		case '+':
			sum += 0.3;
			break;
		case '-':
			sum -= 0.3;
			break;

		default:
			break;
		}
	}
	if (s[1] == '0' || s[0]=='F')
		cout << sum << ".0";
	else
	cout << sum;
}