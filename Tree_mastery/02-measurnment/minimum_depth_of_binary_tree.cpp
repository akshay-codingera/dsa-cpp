#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int minDepth(TreeNode* root)
{
    if (root == NULL)
        return 0;

    // Leaf node
    if (root->left == NULL && root->right == NULL)
        return 1;

    // Only right child
    if (root->left == NULL)
        return 1 + minDepth(root->right);

    // Only left child
    if (root->right == NULL)
        return 1 + minDepth(root->left);

    // Both children
    return 1 + min(minDepth(root->left),
                   minDepth(root->right));
}

int main()
{
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int depth = minDepth(root);

    cout << "Minimum depth of the binary tree: "
         << depth << endl;

    return 0;
}