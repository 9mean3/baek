#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	map<string, int> cat;
	for (int i = 0; i < clothes.size(); i++)
	{
		cat[clothes[i][1]]++;
	}
	for (auto i : cat)
	{
		answer *= (i.second + 1);
	}
	return --answer;
}