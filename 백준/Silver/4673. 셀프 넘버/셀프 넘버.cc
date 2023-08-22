#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>

#include<algorithm>//

#include<sstream>
using namespace std;

int main() {
	bool arr[10001] = { false };
	for (int i = 0; i < 10000; i++)
	{
		int sm = i;
		int c = i;
		while (c != 0)
		{
			sm += c % 10;
			c /= 10;
		}
		if (sm <= 10000)
			arr[sm] = true;
		//cout << arr[sm] << endl;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (!arr[i]) {
			cout << i << endl;
		}
	}
}