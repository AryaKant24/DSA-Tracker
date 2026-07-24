#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxWindow(vector<int> &nums, int k)
    {
        int left = 0, right = 0;
        int window = 0;
        int sum = nums[0];

        while(right<nums.size())
        {
            while(left<=right && sum>k)
            {
                sum -= nums[left];
                left++;
            }

            if(sum == k)
            {
                window = max(window, right-left+1);
            }

            right++;
            if(right<nums.size())
            {
                sum+=nums[right];
            }
        }

        return window;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int ans = obj.maxWindow(nums,15);
    cout<<ans;
}