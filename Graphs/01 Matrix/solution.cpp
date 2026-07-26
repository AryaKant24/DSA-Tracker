#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> bfs(vector<vector<int>> &visited, vector<vector<int>> &distance, vector<vector<int>> mat)
    {
        queue<pair<pair<int, int>, int>> q;
        for(int i = 0;i<mat.size();i++)
        {
            for(int j = 0;j<mat[0].size();j++)
            {
                if(mat[i][j] == 0)
                {
                    q.push({{i, j},0});
                    visited[i][j] = 1;
                }
            }
        }

        int row[] = {-1,0,1,0};
        int col[] = {0,1,0,-1};
  
        while(!q.empty())
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int dist = q.front().second;
            q.pop();
            for(int i = 0;i<4;i++)
            {
                int nrow = x + row[i];
                int ncol = y + col[i];

                if(nrow>=0 && nrow<visited.size() && ncol>=0 && ncol<visited[0].size()  && !visited[nrow][ncol]) 
                {
                    if(mat[nrow][ncol] == 0)
                    {
                    visited[nrow][ncol] = 1;
                    distance[nrow][ncol] = dist;
                    }
                    else
                    {
                    visited[nrow][ncol] = 1;
                    distance[nrow][ncol] = dist+1;
                    q.push({{nrow, ncol}, dist+1}); 
                    }
                }
            }
        }

        return distance;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> visited(m, (vector<int>(n, 0)));
        vector<vector<int>> distance(m, (vector<int>(n, 0)));

        return bfs(visited, distance, mat);
    }
};