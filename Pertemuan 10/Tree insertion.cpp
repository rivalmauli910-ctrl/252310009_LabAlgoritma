#include <iostream>
using namespace std;

class Node
{
	public :
		int data;
		Node* left;
		Node* right;
		
		Node (int value)
		{
			data = value;
			left = NULL;
			right = NULL;
		}
};

int main() {

	root -> left = new TreeNode(6);
	root -> right = new TreeNode(2);

	root -> left -> left = new TreeNode(2);
	root -> left -> right = new TreeNode(13);

	root -> right -> left = new TreeNode(19);
	root -> right -> right = new TreeNode(33);

	root -> left -> right -> left = new TreeNode(7);

	root -> right -> left -> left = new TreeNode(1);
	root -> right -> left -> right = new TreeNode(41);
	return 0;
}
