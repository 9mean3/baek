#include<iostream>
using namespace std;

int main(){	
	int input, t;
	int a = 0;
	cin >> input;

	for (int i = 0; i <= input; i++)
	{
		t = i;
		a = 0;
		while (true)
		{
			if (t <= 0)
				break;
			a += t % 10;
			t /= 10;
		}
		if (a + i == input) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}