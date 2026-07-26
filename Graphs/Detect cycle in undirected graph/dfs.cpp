#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
  
    bool detect(vector<int> adj[], vector<int> &visited, int start, int parent){
        visited[start] = 1;
        
        for(auto it: adj[start])
        {
            if(!visited[it])
            {
                if(detect(adj,visited,it,start) == true)
                {
                    return true;
                }
            }
            else if(it != parent)
            {
                return true;
            }
        }
        
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int> adj[V];
        for(int i = 0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> visited(V,0);
        bool ans = false;
        for(int i = 0;i<V;i++)
        {
            if(!visited[i])
            {
                ans = ans || detect(adj, visited, i, -1);
            }
        }
        
        return ans;
        
    }
};