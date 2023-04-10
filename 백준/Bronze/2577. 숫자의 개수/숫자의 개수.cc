#include<iostream>
using namespace std;

int main(){
	int a, b, c, wjwkd;
	int arr[10] = { 0 };
	cin >> a >> b >> c;
	a *= b * c;
	while (a > 0) {
		wjwkd = a % 10;
		arr[wjwkd]++;
		a /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}