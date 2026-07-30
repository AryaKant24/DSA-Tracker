#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1 = 0, p2 = height.size()-1;
        int volume = min(height[p1],height[p2])*(p2-p1);
        while(p1<p2)
        {
            if(height[p1]<height[p2])
            {
                p1++;
            }
            else
            {
                p2--;
            }
            volume = max(volume, min(height[p1],height[p2])*(p2-p1));
        }
        return volume;
    }
};