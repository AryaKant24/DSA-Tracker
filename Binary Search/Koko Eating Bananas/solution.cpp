#include<iostream>
#include<vector>

using namespace std;

class Solution {
public: 
    long long calculateHours(vector<int> &piles, int rate)
{
    long long totalHours = 0;

    for(int i = 0; i < piles.size(); i++)
    {
        totalHours += (piles[i] + (long long)rate - 1) / rate;
    }

    return totalHours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = piles[0];
        for(int i = 1;i<piles.size();i++)
        {
            if(piles[i]>max) max= piles[i];
        }

        int left = 1, right = max;
        while(left<=right)
        {
            int mid = (left+right)/2;
            long long time = calculateHours(piles, mid);
            if(time<=h)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return left;
    }
};