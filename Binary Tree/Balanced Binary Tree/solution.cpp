#include<iostream>
#include<vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int f(TreeNode *root)
    {
        if(root == NULL)return 0;

        int left = 1+f(root->left);
        int right = 1+f(root->right);

        return max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)return true;
        int lh = f(root->left);
        int rh = f(root->right);

        if(abs(lh-rh)>1) return false;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        if(left == false || right == false) return false;
        return true;
    }
};