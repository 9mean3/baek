#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int cnt;
	cin >> cnt;

	if (cnt % 2 == 0)
	{
		cout << "SK" << endl;
	}
	else if (cnt % 2 == 1)
	{
		cout << "CY" << endl;
	}
}