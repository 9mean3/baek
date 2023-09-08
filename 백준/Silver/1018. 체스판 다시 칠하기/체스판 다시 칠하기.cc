#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>

using namespace std;

int BW(int a, int b, vector<string> map) {
	string BW[9] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
	};

	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (BW[i][j] != map[i + a][j + b])
				count++;
		}
	}
	return count;
}
int WB(int a, int b, vector<string> map) {
	string WB[9] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"BWBWBWBW"
	};

	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (WB[i][j] != map[i + a][j + b])
				count++;
		}
	}
	return count;
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> map;


	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		map.push_back(input);
	}
	int minCnt = 2501;
	for (int i = 0; i + 8 <= n; i++)
	{
		for (int j = 0; j + 8 <= m; j++)
		{
			int wC = WB(i, j, map);
			int bC = BW(i, j, map);
			int mC = wC < bC ? wC : bC;
			//cout << mC << endl;
			if (minCnt > mC)
				minCnt = mC;
		}
	}
	cout << minCnt;
}