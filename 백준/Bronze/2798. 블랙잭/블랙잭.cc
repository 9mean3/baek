#include<iostream>
using namespace std;
int main(){
    	int n, m, distn, min = 300000;
	cin >> n >> m;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				distn = m - (arr[i] + arr[j] + arr[k]);
				if (distn < min && distn >= 0) {
					min = distn;
				}
			}
		}
	}
	cout << m - min;
	delete[] arr;
}