#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	set<int> s;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	for (auto i : s)
	{
		cout << i << ' ';
	}
}