#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void f(string s, int open, int close, int n, vector<string> &res)
    {
        if(s.length() == 2*n)
        {
            res.push_back(s);
            return;
        }

        if(open<n) f(s+'(',open+1,close,n,res);
        if(close<open) f(s+')',open,close+1,n,res);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string ans = "";
        f(ans,0,0,n,res);

        return res;
    }
};