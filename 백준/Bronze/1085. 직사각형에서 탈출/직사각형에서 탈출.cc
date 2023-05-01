#include<iostream>
using namespace std;

int main(){
    int x, y, w, h;
	int xs, ys;
	cin >> x >> y >> w >> h;
	xs = w - x;
	ys = h - y;
	int resx = x <= xs ? x : xs;
	int resy = y <= ys ? y : ys;
	if (resx <= resy) {
		cout << resx;
	}
	else {
		cout << resy;
	}
}