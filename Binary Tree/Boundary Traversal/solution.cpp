#include<iostream>
#include<vector>

using namespace std;

class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; 

class Solution {
  public:
    bool isLeaf(Node *root)
    {
        if(root->left == NULL && root->right == NULL)return true;
        else
        {
            return false;
        }
    }
    
    void leftBoundary(Node *root, vector<int> &ans)
    {
        Node* curr = root->left;
        while(curr)
        {
            if(!isLeaf(curr))ans.push_back(curr->data);
            if(curr->left)curr=curr->left;
            else 
            {
                curr = curr->right;
            }
        }
    }
    
    void addLeaves(Node *root, vector<int> &ans)
    {
        if(isLeaf(root)){
            ans.push_back(root->data);
            return;
        }
        if(root->left)addLeaves(root->left,ans);
        if(root->right)addLeaves(root->right,ans);
    }
    
    void rightBoundary(Node *root, vector<int> &ans)
    {
        Node *curr = root->right;
        vector<int> temp;
        while(curr)
        {
            if(!isLeaf(curr))temp.push_back(curr->data);
            if(curr->right)curr = curr->right;
            else{
                curr = curr->left;
            }
        }
        
        for(int i = temp.size()-1;i>=0;i--)
        {
            ans.push_back(temp[i]);
        }
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if(!isLeaf(root))ans.push_back(root->data);
        leftBoundary(root, ans);
        addLeaves(root,ans);
        rightBoundary(root, ans);
        return ans;
    }
};