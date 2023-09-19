#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;

struct person {
	int age;
	string name;
};
	person info[100001];
int comp(person a, person b) {
	if (a.age != b.age)	
		return a.age < b.age;
	return false;
}

int main()
{
    ios::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		info[i].age = age;
		info[i].name = name;
	}
	stable_sort(info, info + n, comp);

	for (int i = 0; i < n; i++) {
		cout << info[i].age << ' ' << info[i].name << "\n";
	}
}