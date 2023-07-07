#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
	map<string, string> idname;
	vector<pair<string, string>> log;
	vector<string> answer;
		string state, user, name;
	for (auto s:record) {
		stringstream stream(s);
		stream >> state; stream >> user; stream >> name;
		if (state == "Enter")
		{
			idname[user] = name;
			log.push_back(make_pair(user, state));
		}
		else if (state == "Change")
		{
			idname[user] = name;
		}
		else if (state == "Leave")
		{
			log.push_back(make_pair(user, state));
		}
	}

	for (auto s : log)
	{
		if (s.second == "Enter") {
			answer.push_back(idname[s.first]+"님이 들어왔습니다.");
		}
		else if (s.second == "Leave") {
			answer.push_back(idname[s.first] + "님이 나갔습니다.");
		}
	}

    
    

    return answer;
}