#include<iostream>
using namespace std;

int main(){
    	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    	int n, input;
	int arr[10001] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[input]++;
	}
	for (int i = 0; i < 10001; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			cout << i << '\n';
		}
	}
}