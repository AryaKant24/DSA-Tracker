# Notes

## Approach
Better: Use a hash map and check for frequency 1
Best:
XOR: If every number appears exactly twice except one, XOR automatically cancels all the duplicate numbers.
nums = [4, 1, 2, 1, 2]
res = 0
0 ^ 4 = 4
4 ^ 1 = 5
5 ^ 2 = 7
7 ^ 1 = 6
6 ^ 2 = 4

Missing Number:
1. XOR all the numbers that should be present: 0 ^ 1 ^ 2 ^ 3
2. Then XOR all the numbers that actually exist: 3 ^ 0 ^ 1
3. Combine them: (0 ^ 1 ^ 2 ^ 3) ^ (3 ^ 0 ^ 1)
4. Rearrange: (0 ^ 0) ^ (1 ^ 1) ^ (3 ^ 3) ^ 2
5. Everything cancels: 0 ^ 0 ^ 0 ^ 2
6. Answer = XOR
 
## Mistakes

## Time Complexity
O(N)
## Space Complexity
O(1)
## Edge Cases