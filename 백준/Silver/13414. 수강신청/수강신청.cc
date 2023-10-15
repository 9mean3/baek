#include<iostream>
#include<map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
     	map<string, int> user;
	map<int, string> cor;
	int k, l;
	cin >> k >> l;
	for (int i = 0; i < l; i++)
	{
		string input;
		cin >> input;
		user[input] = i + 1;
	}
	for (auto i : user)
	{
		cor[i.second] = i.first;
	}
	for (auto i : cor)
	{
		k--;
		cout << i.second << '\n';
		if (k <= 0) break;
	}
}