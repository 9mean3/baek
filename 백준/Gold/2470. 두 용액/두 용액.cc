#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	set<int> s;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		s.insert(input);
	}
	for (auto i : s) {
		arr.push_back(i);
	}

	
	int l = 0;
	int r = n - 1;
	int min = 2147483647;
	int ml, mr;
	while (l < r)
	{
		//cout << arr[l] << arr[r] << endl;
		int s = arr[l] + arr[r];
		if (s < 0)
			s *= -1;

		if (s < min) {
			min = s;
			ml = l;
			mr = r;
		}

		if (arr[l] + arr[r] > 0)
			r--;
		else if (arr[l] + arr[r] < 0)
			l++;
		else {
			ml = l;
			mr = r;
			break;
		}
	}

	cout << arr[ml] << ' ' << arr[mr];
}