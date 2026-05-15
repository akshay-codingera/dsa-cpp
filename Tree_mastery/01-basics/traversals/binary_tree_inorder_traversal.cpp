#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void inorder(TreeNode* root) {

    // Base Condition
    if(root == NULL)
        return;

    // Left
    inorder(root->left);

    // Root
    cout << root->val << " ";

    // Right
    inorder(root->right);
}

int main() {

    /*
            1
           / \
          2   3
         / \
        4   5
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Inorder Traversal: ";

    inorder(root);

    return 0;
}