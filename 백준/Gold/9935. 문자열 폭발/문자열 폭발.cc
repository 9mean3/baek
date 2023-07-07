#include<iostream>
using namespace std;

int main(){	ios::sync_with_stdio(false);
	string str, bomb, answer, check;
	cin >> str >> bomb;
	for (int i = 0; i < str.size(); i++)
	{
		answer += str[i];
		if (str[i] == bomb.back() && answer.size() >= bomb.size())
		{
			check = "";
			for (int j = 0; j < bomb.size(); j++) {
				check += answer[(answer.size()-bomb.size()) + j];
			}
			//cout << check << endl;
			if (check == bomb) {
				answer.erase(answer.end()-bomb.size(), answer.end());
				//str.erase(i - (bomb.size()), i);
				//cout << "지움" << endl;
			}
		}
	}
	if (answer == "")
		cout << "FRULA";
	else
		cout << answer;
          }