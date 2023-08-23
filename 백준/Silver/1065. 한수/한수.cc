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
	int n;
	cin >> n;
	int count = 99;
	if (n >= 100)
		for (int idx = 100; idx <= n; idx++)
		{
			vector<int> dcs;
			int nn = idx;
			while (nn != 0)
			{
				dcs.push_back(nn % 10);
				//cout << nn % 10;
				nn /= 10;
			}
			//cout << dcs.size();
			int dif;
			bool flag = true;
			for (int i = 1; i < dcs.size(); i++)
			{
				if (i == 1)
					dif = dcs[i] - dcs[i - 1];
				else {
					if (dcs[i] - dcs[i - 1] != dif) {
						flag = false;
					}
				}
				//cout << dcs[i] - dcs[i - 1] << ' ';
			}
			if (flag) count++;
			//cout << flag;
			//cout << endl;
		}
	else {
		if (n != 0)
			count = n;
		else
			count = 1;
	}
	cout << count;
}