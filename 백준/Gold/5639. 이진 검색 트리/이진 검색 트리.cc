#include<iostream>
#include<map>
using namespace std;


struct Node
{
	int numValue = NULL;
	Node* left = NULL;
	Node* right = NULL;
};


void InsertNode(int value, Node* root) {
	//cout << value << ' ' << root->numValue << endl;
	if (value == root->numValue) // 중복
	{
		return;
	}
	if (value < root->numValue) {
		if (root->left == NULL) {
			root->left = new Node;
			root->left->numValue = value;
		}
		else
			InsertNode(value, root->left);
	}
	else if (value > root->numValue) {
		if (root->right == NULL) {
			root->right = new Node;
			root->right->numValue = value;
		}
		else
			InsertNode(value, root->right);
	}
}

void who(Node& node) {
	if (node.left != NULL)
	{
		who(*node.left);
	}
	if (node.right != NULL)
	{
		who(*node.right);
	}
	cout << node.numValue << "\n";
}

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	Node root;
	root.numValue = NULL;
	int value;
	while (cin >> value)
	{

		if (root.numValue == NULL)
		{
			root.numValue = value;
		}
		else
		{
			InsertNode(value, &root);
		}
	}
	who(root);
}