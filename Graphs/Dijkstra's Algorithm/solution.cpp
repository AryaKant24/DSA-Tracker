#include<iostream>
#include<vector>
#include <queue>

using namespace std;

class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        // Code here
        vector<int> distance(V, 1e9);
        distance[src] = 0;
    
        vector<pair<int, int>> adj[V];
        for(int i = 0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
        pq.push({0, src});

        while(!pq.empty())
        {
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            if(dist>distance[node])
            {
                continue;
            }
            
            for(auto it: adj[node])
            {
                int neighborDist = it.second;
                int neighbor = it.first;
                
                if(dist + neighborDist<distance[neighbor])
                {
                    distance[neighbor] = dist + neighborDist;
                    pq.push({distance[neighbor], neighbor});
                }
            }
        }
        
        return distance;
    }
};