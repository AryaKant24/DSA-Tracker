#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool f(int i, int counter, string s, vector<vector<int>> &dp)
    {
        if(counter<0) return false;
        if(i == s.length())
        {
            return counter== 0;
        }
        if(dp[i][counter] != -1) return dp[i][counter];
        if(s[i] == '(')
        {
            return dp[i][counter] = f(i+1,counter+1,s,dp);
        }
        else if(s[i] == ')')
        {
            return dp[i][counter] = f(i+1,counter-1,s,dp);
        }
        else
        {
            bool open = f(i+1,counter+1,s,dp);
            bool close = f(i+1,counter-1,s,dp);
            bool empty = f(i+1,counter,s,dp);

            return dp[i][counter] = ((open | close) | empty);
        }
    }
    bool checkValidString(string s) {
        vector<vector<int>> dp(s.length(), vector<int>(s.length()+1, -1));
        return f(0,0,s,dp);
    }
};