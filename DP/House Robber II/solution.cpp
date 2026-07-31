#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int helper1(int idx, vector<int> &nums, vector<int> &dp)
    {
        if(idx<=0) return 0;
        if(dp[idx] != -1) return dp[idx];
        int pick = nums[idx] + helper1(idx-2,nums,dp);
        int notpick = 0+ helper1(idx-1,nums,dp);

        return dp[idx] = max(pick,notpick);
    }

    int helper2(int idx, vector<int> &nums, vector<int> &dp)
    {
        if(idx<0)return 0;
        if(dp[idx] != -1) return dp[idx];
        int pick = nums[idx] + helper2(idx-2,nums,dp);
        int notpick = 0+ helper2(idx-1,nums,dp);

        return dp[idx] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        if(n == 1)return nums[n-1];
        int res1 = helper1(n-1,nums,dp1);
        int res2 = helper2(n-2,nums,dp2);

        return max(res1,res2);
    }
};