#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0;
        int count = 0;
        map<int, int> mpp;
        mpp[0] = 1;   

        for(int i = 0;i<nums.size();i++)
        {
            prefixSum+=nums[i];
            int diff = prefixSum - k;
            count += mpp[diff];
            mpp[prefixSum]++;
        }
        return count;
    }
};

int main()
{
    return 0;
}