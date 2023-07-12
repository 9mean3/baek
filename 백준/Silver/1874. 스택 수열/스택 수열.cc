#include<iostream>
#include<stack>
using namespace std;

int main(){
    	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int> stc;
	int number = 0;
	int t;
	int* arr;
	string ans;
	cin >> t;
	arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < t; i++)
	{
		while (arr[i] > number) {
			number++;
			stc.push(number);

			ans.push_back('+');
		}
		if (arr[i] == stc.top()) {
			stc.pop();

			ans.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << '\n';
	}
}