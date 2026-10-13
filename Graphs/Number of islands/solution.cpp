#include<iostream>
#include<vector>

using namespace std;

void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<int>> &visited, int nrow[], int ncol[])
{
    visited[i][j] = 1;
    for(int k = 0;k<4;k++)
    {
        int row = i + nrow[k];
        int col = j + ncol[k];

        if(row>=0 && col>=0 && row<grid.size() && col<grid[0].size() && !visited[row][col] && grid[row][col] == '1')
        {
            dfs(row,col,grid,visited,nrow,ncol);
        }
    }
}

int numIslands(vector<vector<char>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> visited(m, vector<int>(n, 0));
    
    int counter = 0;

    int nrow[] = {-1,0,1,0};
    int ncol[] = {0,1,0,-1};

    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(!visited[i][j] && grid[i][j] == '1')
            {
                counter++;
                dfs(i,j,grid,visited,nrow,ncol);
            }
        }
    }

    return counter;
}