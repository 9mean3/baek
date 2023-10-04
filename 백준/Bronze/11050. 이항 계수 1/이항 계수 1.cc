#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;

int f(int n) {
	if (n == 1 || n == 0)
		return 1;
	return f(n - 1) * n;
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << f(n) / (f(k) * f(n - k));
}