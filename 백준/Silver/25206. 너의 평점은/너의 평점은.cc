#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>

using namespace std;

int main()
{
	float scr, grd, sumscr = 0, ar = 0;
	for (int i = 0; i < 20; i++)
	{
		string s, grade;
		cin >> s >> scr >> grade;
        		if (grade[0] == 'P')continue;
		switch (grade[0])
		{
		case 'A':
			grd = 4;
			break;
		case 'B':
			grd = 3;
			break;
		case 'C':
			grd = 2;
			break;
		case 'D':
			grd = 1;
			break;
		default:
			grd = 0;
			break;
		}
		if (grade[1] == '+')
			grd += 0.5;
		
		sumscr += (scr * grd);
		ar += scr;
	}
	cout << sumscr / ar;
}