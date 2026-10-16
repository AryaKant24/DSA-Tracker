#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int maxlen = 0;
        int prefixSum = 0;
        unordered_map<int, int> mpp;
        
        for(int i = 0;i<arr.size();i++)
        {
            prefixSum += arr[i];
            if(prefixSum == 0)
            {
                maxlen = i+1;
            }
            else
            {
                if(mpp.find(prefixSum) != mpp.end())
                {
                    maxlen = max(maxlen, (i - mpp[prefixSum]));
                }
                else
                {
                    mpp[prefixSum] = i;
                }
            }
        }
        
        return maxlen;
    }
};