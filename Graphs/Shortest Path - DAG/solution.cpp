#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
  public:
    void topo(int node, vector<pair<int, int>> adj[], stack<int> &st, int visited[])
    {
        visited[node]=1;
        for(auto it: adj[node])
        {
            if(!visited[it.first])
            {
                topo(it.first, adj, st,visited);
            }
        }
        st.push(node);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) 
    {
        // code here
        vector<pair<int, int>> adj[V];
        for(auto it: edges)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }
        int visited[V] = {0};
        stack<int> st;
        
        topo(0,adj,st,visited);
        
        vector<int> distance(V, 1e9);
        distance[0] = 0;
        while(!st.empty())
        {
            int node = st.top();
            st.pop();
            for(auto it: adj[node])
            {
                int neighbor = it.first;
                int wt = it.second;
                if(distance[node] + wt<distance[neighbor])
                {
                    distance[neighbor] = distance[node]+wt;
                }
            }
        }
        for(int i = 0;i<V;i++)
        {
            if(distance[i] == 1e9)
            {
                distance[i] = -1;
            }
        }
        return distance;
    }
};
