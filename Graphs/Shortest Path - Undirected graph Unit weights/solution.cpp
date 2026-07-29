#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        // code here
        vector<int> distance(V, 1e9);
        vector<int> adj[V];
        for(auto it: edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        queue<int> q;
        distance[src] = 0;
        q.push(src);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it: adj[node])
            {
                if(1+distance[node]<distance[it])
                {
                    distance[it] = 1+distance[node];
                    q.push(it);
                }
            }
        }
        vector<int> ans(V, -1);
        for(int i = 0;i<V;i++)
        {
            if(distance[i] != 1e9)
            {
                ans[i] = distance[i];
            }
        }
        
        return ans[dest];
        
    }
};