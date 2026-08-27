# Notes

## Approach
Could use the same approach as subarrays with sum k
But since this problem has only 0 and 1 we can make it simpler
We improve space complexity
1. Count subarrays with sum <= goal
2. Count subarrays with sum = goal
1-2 is the answer

For an index i we can have i + i-1 + i-2 .... 0 subarrays
If sum exceeds goal, we subtract left number from sum and increment left
## Mistakes
Left and right pointer normal approach misses subarrays
## Time Complexity
O(N + 2N)
## Space Complexity
O(1)
## Edge Cases