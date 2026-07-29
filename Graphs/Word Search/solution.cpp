#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool dfs(vector<vector<char>> &board, string &word, int row, int col, int idx)
    {
        if(idx == word.size()) return true;
        if(row<0 || row>=board.size() || col<0 || col>=board[0].size())
        {
            return false;
        }

        if(board[row][col] != word[idx])
        {
            return false;
        }

        char ch = board[row][col];
        board[row][col] = '#';

        bool found = 
        dfs(board, word, row + 1, col, idx + 1) ||
        dfs(board, word, row - 1, col, idx + 1) ||
        dfs(board, word, row, col + 1, idx + 1) ||
        dfs(board, word, row, col - 1, idx + 1);

        board[row][col] = ch;

        return found;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }

        return false;
    }
};