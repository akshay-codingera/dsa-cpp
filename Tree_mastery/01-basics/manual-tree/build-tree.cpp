// tree as a data structure is a hierachical data structure 
#include<bits/stdc++.h>
using namespace std;

struct Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};GHJHGGJK

void buildTree(Node* root)
{
    cout << "enter the data for the node: : ";
    int data;
    cin >> data;
    root = new Node(data);
    cout << "enter the data for the left child of " << data << endl;
    buildTree(root->left);
    cout << "enter the data for the right child of " << data<< endl;
    buildTree(root->right);
}

int main()
{
    Node* root = NULL;
    buildTree(root);
    return 0;
}