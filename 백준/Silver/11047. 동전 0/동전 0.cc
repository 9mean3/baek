#include<iostream>
using namespace std;

int main(){
    	int n, k, count = 0;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) { cin >> arr[i]; }

	for (int i = n - 1; i >= 0; i--)
	{
		while (k >= arr[i])
		{
			k -= arr[i];

			count++;
		}
		if (k == 0)break;
	}

	cout << count;
}