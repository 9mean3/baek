#include<iostream>
#include<map>

using namespace std;

int main(){
    	int n;
	cin >> n;
	for (int idx = 0; idx < n; idx++) {
		int m;
		map<string, int> cat;
		cin >> m;
		for (int i = 0; i < m; i++) {
			string name, categ;
			cin >> name >> categ;
			cat[categ]++;
		}

		int answer = 1;
		for (auto i : cat) {
			answer *= i.second + 1;
		}
		cout << --answer << endl;
	}
}