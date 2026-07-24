# Notes

## Approach
Brute Force would be O(N^2) by checking each from 0 to n then 1 to n and so on/

Optimal Approach: Sliding Window
1. Initialize left and right pointers to 0.
2. Initialize window size to zero.
3. Initialize sum to nums[0];
4. While right<n, 
    *WHILE* the sum is greater than target, subtract left from sum and increment left
    Else if value of sum == target, update window with maximum value.
    Else increment right and if right<n, update sum.

## Mistakes
WHILE the sum is greater than target and not *if* the sum is greater than target!
window = max(window, right - left *+1*)
## Time Complexity
o(N)
## Space Complexity
O(1)
## Edge Cases