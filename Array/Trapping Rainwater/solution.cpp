#include<iostream>
#include<vector>
class Solution {
public:
    int trap(vector<int>& height) {
        int total = 0;
        vector<int> prefix = height;
        for(int i = 1;i<height.size();i++)
        {
            prefix[i] = max(prefix[i], prefix[i-1]);
        }

        vector<int> suffix = height;
        for(int i = height.size()-2;i>=0;i--)
        {
            suffix[i] = max(suffix[i], suffix[i+1]);
        }

        for(int i = 0;i<height.size();i++)
        {
            total += max(prefix[i],suffix[i]) - height[i];
        }

        return total;
    }
};
using namespace std;