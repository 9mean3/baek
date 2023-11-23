#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int	t;
	cin >> t;
	while (t--)
	{
		vector<int> arr, brr;
		int a, b;
		cin >> a >> b;
		for (int i = 0; i < a; i++)
		{
			int input;
			cin >> input;
			arr.push_back(input);
		}
		for (int i = 0; i < b; i++)
		{
			int input;
			cin >> input;
			brr.push_back(input);
		}

		sort(brr.begin(), brr.end());

		int cnt = 0;
		for (auto i : arr) {
			vector<int>::iterator iter = lower_bound(brr.begin(), brr.end(), i);
			cnt += iter - brr.begin();
			//cout << "cnt:" << iter - brr.begin() << endl;
		}

		cout << cnt << endl;
	}
}