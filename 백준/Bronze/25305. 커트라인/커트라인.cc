#include<iostream>
#include<vector>
using namespace std;

int main(){
    	int n, k, input;
	vector<int> v;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == 0)
				continue;
			else if (v[j] > v[j - 1])
				swap(v[j], v[j - 1]);
		}
	}
	cout << v[k - 1];
}