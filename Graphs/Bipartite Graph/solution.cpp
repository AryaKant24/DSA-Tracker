#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool dfs(int node, int x, vector<int> &color, vector<vector<int>> &graph){
        color[node] = x;
        for(int i = 0;i<graph[node].size();i++)
        {
            if(color[graph[node][i]] == -1)
            {
                if(dfs(graph[node][i], !x, color, graph) == false)
                {
                    return false;
                }
                else if(color[node] == color[graph[node][i]])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(), -1);

        for(int i = 0;i<graph.size();i++)
        {
            if(color[i] == -1)
            {
                if(dfs(i, 0, color, graph) == false) return false;
            }
        }
        return true;
    }
};