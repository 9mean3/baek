#include<iostream>
using namespace std;

int main(){
    	int arr[26] = { 0 }, max = -1, midx;
	string s;
	bool inm;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if ((int)s[i] > 96) {
			arr[s[i] - 97]++;
		}
		else {
			arr[s[i] - 65]++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
			midx = i;
			inm = true;
		}
		else if (arr[i] == max && max != 0) {
			inm = false;
		}
	}

	if (inm)
		cout << (char)(midx + 65);
	else
		cout << "?";
}