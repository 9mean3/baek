#include<iostream>
using namespace std;
int main(){
	int arr[8] = { 0 };
	bool isdeung = true;
	bool isasc;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (i != 0) {
			if (arr[i] == arr[i - 1] + 1) {
				isasc = true;
			}
			else if (arr[i] == arr[i - 1] - 1) {
				isasc = false;
			}
			else {
				isdeung = false;
			}
		}
	}

	if (isdeung) {
		if (isasc)
			cout << "ascending";
		else
			cout << "descending";
	}
	else
		cout << "mixed";
    
    
}