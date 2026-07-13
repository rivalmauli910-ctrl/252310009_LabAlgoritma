#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int value) {
    TreeNode* newNode = new TreeNode();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preorder(TreeNode* node) {
    if (node == NULL) return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(TreeNode* node) {
    if (node == NULL) return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void postorder(TreeNode* node) {
    if (node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

int main() {

    TreeNode* root = createNode(7);

    root->left = createNode(9);
    root->left->left = createNode(94);
    root->left->right = createNode(103);
    
    root->left->right->left = createNode(31);
    root->left->right->right = createNode(87);
    
    root->left->right->left->left = createNode(78);
    
    root->left->right->left->left->left = createNode(24);
    root->left->right->left->left->right = createNode(76);

    root->right = createNode(83);
    root->right->left = createNode(102);
    root->right->right = createNode(932);
    
    root->right->right->right = createNode(153); 
    
    root->right->right->right->left = createNode(774);
    root->right->right->right->right = createNode(812);

    cout << "Hasil Preorder  : ";
    preorder(root);
    cout << endl;

    cout << "Hasil Inorder   : ";
    inorder(root);
    cout << endl;

    cout << "Hasil Postorder : ";
    postorder(root);
    cout << endl;

    return 0;
}
