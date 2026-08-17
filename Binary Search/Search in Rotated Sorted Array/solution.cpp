#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            if(nums[mid] == target) return mid;
            else if(nums[left]<=nums[mid])                 //check if left half is sorted
            {
                if(nums[mid]<=target && target<=nums[mid]) //if sorted check whether target lies in left half
                {
                    right = mid-1;
                }
                else                                       //else target lies in right half
                {
                    left = mid+1;
                }
            }
            else                                          //left half is not sorted i.e. right half is
            {
                if(nums[mid]<=target && target<=nums[right]) //checks whether target present in sorted right half
                {
                    left = mid+1;
                }
                else                                        //else check in left half
                {
                    right = mid-1;
                }
            }
        }  
        return -1;    
    }
};