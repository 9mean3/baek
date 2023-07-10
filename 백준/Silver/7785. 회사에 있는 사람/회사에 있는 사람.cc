#include<iostream>
#include<map>
using namespace std;

int main(){
    	map<string, int, greater<string>> log;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name;
		string state;
		cin >> name >> state;
		if (state == "enter")
			log[name] = 1;
		else
			log[name] = 0;
	}
	for (auto l : log)
	{
		if (l.second)
			cout << l.first << '\n';
	}
}