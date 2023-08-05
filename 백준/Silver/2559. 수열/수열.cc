#include<iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int start = 0;
	int end = k - 1;
	int max = 0;
	int wjwkdth = 0;

	if (start == 0)
		for (int i = 0; i < k; i++)
		{
			wjwkdth += arr[i];
		}
	while (end < n)
	{
		if (start != 0)
			wjwkdth += arr[end];

		if (wjwkdth > max || start == 0)
			max = wjwkdth;

		wjwkdth -= arr[start];
		start++; end++;
	}
	cout << max;
}