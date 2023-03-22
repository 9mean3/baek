#include<iostream>
using namespace std;

int main(){
	int n;
	int chessHorse[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++)
	{
		cin >> n;
		chessHorse[i] -= n;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << chessHorse[i] << " ";
	}
}