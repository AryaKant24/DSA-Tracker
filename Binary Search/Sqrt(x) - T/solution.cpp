#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long left = 1, right = x;
        while(left<=right)
        {
            long long mid = (left+right)/2;
            long long mid2 = mid*mid;
            if(mid2 == x) return mid;
            if(mid2<x) left = mid+1;
            else
            {
                right = mid-1;
            }
        }
        return right;
    }
};