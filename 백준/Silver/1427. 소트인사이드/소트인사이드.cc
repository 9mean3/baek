#include <iostream>
#include <vector>
using namespace std;

int main(){
    	int input;
	vector<int> v;
	cin >> input;
	while (true)
	{
		if (input <= 0)
			break;
		v.push_back(input % 10);
		input /= 10;
	}
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			if (j == 0)
				continue;
			else if (v[j] > v[j - 1])
				swap(v[j], v[j - 1]);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
}