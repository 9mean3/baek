#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;

struct point {
	int a;
	int b;
};
point points[100001];

int comp(point a, point b) {
	if (a.a != b.a)
		return a.a < b.a;
	else {

		return a.b < b.b;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		int b;
		cin >> a >> b;
		points[i].a = a;
		points[i].b = b;
	}
	sort(points, points + n, comp);

	for (int i = 0; i < n; i++) {
		cout << points[i].a << ' ' << points[i].b << "\n";
	}
}