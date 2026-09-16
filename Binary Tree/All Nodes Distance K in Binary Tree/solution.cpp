#include<iostream>
#include<vector>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    void bfs(TreeNode *root, unordered_map<TreeNode*, TreeNode*> &mpp)
    {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if(temp->left)
            {
                mpp[temp->left] = temp;
                q.push(temp->left);
            }
            if(temp->right)
            {
                mpp[temp->right] = temp;
                q.push(temp->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> mpp;
        bfs(root, mpp);
        vector<int> ans;
        set<TreeNode*> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited.insert(target);
        int dist = 0;
        while(!q.empty())
        {
            int size = q.size();
            if(dist == k) break;
            dist++;
            for(int i = 0;i<size;i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                if(curr->left && visited.find(curr->left) == visited.end())
                {
                    q.push(curr->left);
                    visited.insert(curr->left);
                }
                if(curr->right && visited.find(curr->right) == visited.end())
                {
                    q.push(curr->right);
                    visited.insert(curr->right);
                }
                if(mpp.find(curr) != mpp.end() && visited.find(mpp[curr]) == visited.end())
                {
                    q.push(mpp[curr]);
                    visited.insert(mpp[curr]);
                }
            }
        }

        while(!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            ans.push_back(temp->val);
        }
        return ans;
    }
};