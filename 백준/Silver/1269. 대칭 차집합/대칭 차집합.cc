#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int> a;
	set<int> b;
	int al, bl;
	int sum = 0;
	cin >> al >> bl;
	for (int i = 0; i < al; i++)
	{
		int input;
		cin >> input;
		a.insert(input);
	}
	for (int i = 0; i < bl; i++)
	{
		int input;
		cin >> input;
		b.insert(input);
	}

	set<int>::iterator iter;
	for (iter = a.begin(); iter != a.end(); iter++) {
		if (b.find(*iter) == b.end()) {
			sum++;
		}
	}
	for (iter = b.begin(); iter != b.end(); iter++) {
		if (a.find(*iter) == a.end()) {
			sum++;
		}
	}

	cout << sum;
}