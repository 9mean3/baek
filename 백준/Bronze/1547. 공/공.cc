#include<iostream>
using namespace std;

int main(){
    int cup[3] = { 1,0,0 };
int n;
cin >> n;
for (int i = 0; i < n; i++)
{
	int a, b;
	cin >> a >> b;
	a--; b--;
	int temp = cup[a];
	cup[a] = cup[b];
	cup[b] = temp;
}
for (int i = 0; i < 3; i++)
{
	if (cup[i] == 1)
		cout << i + 1;
}
}