#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	map<string, int> cat;
	int catsize = 0;
	for (int i = 0; i < clothes.size(); i++)
	{
		if (cat[clothes[i][1]] == 0) catsize++;
		cat[clothes[i][1]]++;
	}
	for (auto i : cat)
	{
		answer *= (i.second + 1);
	}
	answer -= 1;
	return answer;
}