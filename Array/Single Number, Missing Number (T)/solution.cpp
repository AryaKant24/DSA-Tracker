#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0;i<nums.size();i++)
        {
            res = res ^ nums[i];
        }
        return res;
    }

    int missingNumber(vector<int> &nums)
    {
        int xor1 = 0, xor2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            xor1 = xor1 ^ nums[i];
            xor2 = xor2 ^ (i + 1);
        }
        return xor1 ^ xor2;
    }
};