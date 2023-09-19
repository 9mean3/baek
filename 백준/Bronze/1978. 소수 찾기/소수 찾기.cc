#include <iostream>
using namespace std;
int main(){
	int t, n, sum = 0;
	bool isprm;
	cin >> t;
	for (int inx = 0; inx < t; inx++) {
		cin >> n;
		if (n == 1)continue;
		isprm = true;
		for (int i = 2; i < n - 1; i++) {
			if (n % i == 0)
				isprm = false;
			else
				continue;
		}
		if (isprm) {
			//cout << n << endl;
			sum++;
		}
	}
	cout << sum;
}