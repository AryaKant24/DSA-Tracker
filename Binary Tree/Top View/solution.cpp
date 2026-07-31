#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;


class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        map<int, int> mpp;
        queue<pair<Node*,int>> q;
        q.push({root, 0});
        while(!q.empty())
        {
            Node* node = q.front().first;
            int level = q.front().second;
            q.pop();
            if(mpp.find(level) == mpp.end())
            {
                mpp[level] = node->data;
            }
            if(node->left)q.push({node->left, level-1});
            if(node->right)q.push({node->right,level+1});
        }
        
        vector<int> ans;
        for(auto it: mpp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};