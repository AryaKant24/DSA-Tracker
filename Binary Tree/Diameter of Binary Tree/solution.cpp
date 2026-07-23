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
    int diameter = 0;
public:
    int helper(TreeNode *root)
    {
        if(root == NULL) return 0;

        int left_depth = helper(root->left);
        int right_depth = helper(root->right);

        if((left_depth+right_depth)>diameter)
        {
            diameter = left_depth + right_depth;
        }

        return(1+max(left_depth,right_depth));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return diameter;
    }
};