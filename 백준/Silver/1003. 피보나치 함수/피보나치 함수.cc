#include<iostream>
using namespace std;


int main(){
	int t, n;
	int fbnc[40] = { 0, 1 };
	for (int i = 2; i <= 40; i++)
	{
		fbnc[i] = fbnc[i - 1] + fbnc[i - 2];
	}
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		if (n == 0) {
			cout << "1 0\n";
			continue;
		}
		cout << fbnc[n - 1] << " " << fbnc[n] << "\n";
	}
}