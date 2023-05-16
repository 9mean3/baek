#include <iostream>
using namespace std;

int main(){
	int input, s = 1, answer = 1;
	int i = 1;
	cin >> input;
	while (true)
	{
		if (input <= s)
			break;
		else
			s += 6 * i;
		i++;
		answer++;
	}
	cout << answer;
}