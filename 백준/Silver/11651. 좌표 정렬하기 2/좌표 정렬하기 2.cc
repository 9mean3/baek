#include<iostream>
#include<algorithm>
using namespace std;

struct Point
{
	int x;
	int y;
};

Point points[100001];

bool comp(Point a, Point b) {
	if (a.y != b.y)
		return a.y < b.y;
	else
		return a.x < b.x;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		points[i].x = x;
		points[i].y = y;
	}
	
	sort(points, points + n, comp);

	for (int i = 0; i < n; i++)
	{
		cout << points[i].x << ' ' << points[i].y << '\n';
	}
}