#include<iostream>
#include<set>
using namespace std;

int main() {
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		set<int> s;
		s.insert(a); s.insert(b); s.insert(c);
		int f1 = 0, f2 = 0;
		int count = 0;
		for (auto i : s)
		{
			count++;
			if (count != 3)
				f1 += i * i;
			else
				f2 = i * i;
		}
		if (f1 == f2)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}