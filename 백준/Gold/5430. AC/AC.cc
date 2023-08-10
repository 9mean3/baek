#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<deque>
#include<sstream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int idx = 0; idx < t; idx++)
	{
		string f;
		cin >> f;
		int n;
		cin >> n;
		string arr;
		cin >> arr;
		deque<int> deq;
		stringstream ss;
		int ip;

		//for (int i = 0; i < arr.size(); i++)
		//{
		//	if (i % 2 == 0)
		//		continue;
		//	deq.push_back(ss. arr[i]);
		//}
		/*for (int i = 0; i < n; i++)
		{
			int input;
			ss >> input;
			cout << input;
			deq.push_back(input);
		}*/
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] == '[' || arr[i] == ']' || arr[i] == ',')
				arr[i] = ' ';
		}
		ss.str(arr);
		while (ss >> ip)
		{
			//cout << ip;
			deq.push_back(ip);
		}
		bool isFrt = true;
		bool isFck = false;
		for (int i = 0; i < f.size(); i++)
		{
			if (f[i] == 'R') {
				isFrt = !isFrt;
			}
			else if (/*!deq.empty() && */f[i] == 'D') {
			if (deq.empty()) {
					isFck = true;
					continue;
				}

				if (isFrt)
					deq.pop_front();
				else
					deq.pop_back();
			}
			//cout << "덱 사이즈 " << deq.size() << endl;

				
		}
		/*if (deq.empty() && n != 0) {
			isFck = true;
		}*/

		//cout << isFck << endl;
		if (isFck) {
			cout << "error\n";
			continue;
		}

		int size = deq.size();
		cout << '[';
		for (int i = 0; i < size; i++)
		{
			if (isFrt) {
				cout << deq.front();
				deq.pop_front();
			}
			else {
				cout << deq.back();
				deq.pop_back();
			}

			if (i < size - 1)
				cout << ',';
		}
		cout << ']' << '\n';
	}
}