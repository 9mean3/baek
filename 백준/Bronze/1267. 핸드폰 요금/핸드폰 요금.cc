#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;


int main()
{
	int n;
	cin >> n;
	int Ysum = 0;
	int Msum = 0;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		Ysum += (input / 30)+1;
		Msum += (input / 60)+1;
	}
	Ysum *= 10;
	Msum *= 15;
		//cout << (Ysum) << endl << (Msum) << endl;
	if (Ysum < Msum) {
		cout << "Y " << Ysum;
	}
	else if (Ysum > Msum) {
		cout << "M " << Msum;
	}
	else {
		cout << "Y M " << Ysum;
	}
}