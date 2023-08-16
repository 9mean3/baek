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

//void hanoi(int n, int from, int by, int to) {
//	if (n == 1)
//		cout << from << " " << to << endl;
//	else
//	{
//		hanoi(n - 1, from, to, by);
//		cout << from << " " << to << endl;
//		hanoi(n - 1, by, from, to);
//	}
//}


int main() {
	int n;
	cin >> n;
	vector<long long> v;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());


	int count = 0;
	for (int i = 0; i < n; i++)
	{
		//cout << v.size();
		int l = 0;
		int r = n - 1;
		//cout << "l=" << l << "r=" << r << endl;
		while (l < r) {
			//cout << v[i] << '=' << l << '+' << r << '=' << v[l] + v[r] << endl;
			if (r == i)
				r--;
			if (l == i)
				l++;
			if (l >= r)
				break;


			if (v[i] < (v[l] + v[r])) {
				r--;
			}
			else if (v[i] > (v[l] + v[r])) {
				l++;
			}
			else
			{
				count++;
				break;
			}
		}
	}

	cout << count;
}