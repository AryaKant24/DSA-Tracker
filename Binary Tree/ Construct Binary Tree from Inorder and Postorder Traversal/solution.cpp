#include<iostream>
#include<vector>
#include <map>

using namespace std;


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
    TreeNode *fn(vector<int> &inorder, int inStart, int inEnd, vector<int> &postorder, int postStart, int postEnd, map<int, int> &mpp)
    {
        if(inStart>inEnd || postStart>postEnd) return NULL;
        TreeNode *root = new TreeNode(postorder[postEnd]);
        int boundary = mpp[postorder[postEnd]];
        int leftArray = boundary - inStart; //x
        root->left = fn(inorder, inStart, boundary-1, postorder, postStart,postStart + leftArray - 1,  mpp);
        root->right = fn(inorder, boundary+1, inEnd, postorder, postStart + leftArray, postEnd - 1, mpp);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int, int> mpp;
        for(int i = 0;i<inorder.size();i++)
        {
            mpp[inorder[i]] = i;
        }

        return fn(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1, mpp);
    }
};