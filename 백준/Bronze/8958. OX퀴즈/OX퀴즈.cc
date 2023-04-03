#include<iostream>
#include<string>
using namespace std;

int main(){
 	int t, cnt = 0, sum = 0;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		for (int i = 0; i < 80; i++)
		{
			if (s[i] == 'O') {
				cnt++;
				sum += cnt;
			}
			else if (s[i] == 'X')
			{
				cnt = 0;
			}
			else
				break;
		}
		cout << sum << endl;
		sum = 0;
		cnt = 0;
	}
}