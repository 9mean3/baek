#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>

using namespace std;

struct Node
{
	char left;
	char right;
};


// 맵으로 트리 구현
map<char, Node> m;

void PreorderTraverse(char bt)
{
	// 구현해보자!
	if (bt == '.') return;
	cout << bt;
	PreorderTraverse(m[bt].left);
	PreorderTraverse(m[bt].right);
}
void InorderTraverse(char bt)
{
	// 구현해보자!
	if (bt == '.') return;
	InorderTraverse(m[bt].left);
	cout << bt;
	InorderTraverse(m[bt].right);
}
void PostorderTraverse(char bt)
{
	// 구현해보자!
	if (bt == '.') return;
	PostorderTraverse(m[bt].left);
	PostorderTraverse(m[bt].right);
	cout << bt;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char node, left, right;
		cin >> node >> left >> right;
		m[node].left = left;
		m[node].right = right;
	}

	PreorderTraverse('A');
	cout << endl;

	InorderTraverse('A');
	cout << endl;

	PostorderTraverse('A');	
}