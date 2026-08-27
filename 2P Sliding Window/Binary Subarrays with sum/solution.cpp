#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int countSubarrays(vector<int> &nums, int goal)
    {
        int left = 0, right = 0, sum = 0, counter = 0;
        while(right<nums.size())
        {
            sum += nums[right];
            while(left<=right && sum>goal)
            {
                sum = sum - nums[left];
                left++;
            }
            counter += right-left+1;
            right++;
        }

        return counter;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countSubarrays(nums,goal) - countSubarrays(nums, goal-1);
    }
};