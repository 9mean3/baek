#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>

using namespace std;

int main()
{
	string ca[8] = { "c=","c-", "dz=","d-","lj","nj","s=","z=" };
	string input;
	cin >> input;
	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			if (input.find(ca[i]) == string::npos)
				break;
			input.insert(input.find(ca[i]), "1");
			input.erase(input.find(ca[i]), ca[i].size());
		}
		//cout << input << endl;
	}
	cout << input.size();
}