#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int d = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+d,nums.end());
        reverse(nums.begin(),nums.begin()+d);
    }
};