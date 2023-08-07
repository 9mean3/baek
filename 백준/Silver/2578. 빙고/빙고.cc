#include<iostream>
#include<vector>
#include<set>
#include<stack>
using namespace std;

int main() {
	int* pan = new int[25];

	for (int i = 0; i < 25; i++)
	{
		cin >> pan[i];
	}


	int count = 0;
	for (int i = 0; i < 25; i++)
	{
		int input;
		cin >> input;
		for (int j = 0; j < 25; j++)
		{
			if (pan[j] == input) {
				pan[j] = 0;
				break;
			}
		}

		count++;

		int bingoFlag = 0;
		//가로
		for (int idx = 0; idx < 5; idx++)
		{
			int flag = 0;
			for (int jdx = 0; jdx < 5; jdx++)
			{
				if (pan[(idx * 5) + jdx] == 0)
					flag++;
			}
			if (flag == 5)
				bingoFlag++;
		}

		//세로
		for (int idx = 0; idx < 5; idx++)
		{
			int flag = 0;
			for (int jdx = 0; jdx < 5; jdx++)
			{
				if (pan[idx + (jdx * 5)] == 0)
					flag++;
			}
			if (flag == 5)
				bingoFlag++;
		}

		//11t2525
		int d1flag = 0;
		for (int idx = 0; idx < 25; idx += 6)
		{
			if (pan[idx] == 0)
				d1flag++;
		}
		if (d1flag == 5)
			bingoFlag++;

		//2121t55
		int d2flag = 0;
		for (int idx = 4; idx < 21; idx += 4)
		{
			if (pan[idx] == 0)
				d2flag++;
		}
		if (d2flag == 5)
			bingoFlag++;


		//결과
		if (bingoFlag >= 3)
			break;
	}

	cout << count;
}