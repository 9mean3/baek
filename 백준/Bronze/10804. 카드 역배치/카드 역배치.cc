#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;


int main()
{
	int arr[21];
	for (int i = 0; i <= 20; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;
		while (a < b)
		{
			int temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
			a++;
			b--;
		}
	}

	for (int i = 1; i <= 20; i++)
	{
		cout << arr[i] << ' ';
	}
}