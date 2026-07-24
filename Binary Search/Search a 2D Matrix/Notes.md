# Notes

## Approach
1. mid = left+(right-left)/2
2. In 2d matrix of m*n
no. of rows = mid/n
no. of cols= mid%n
3. Find matrix mid, compare and use binary search
## Mistakes
It is essential to remember the formula to calculate the number of rows and number of columns
Same solution might apply to Search a 2D matrix 2 but fails later!
## Time Complexity
O(log(m*n))
## Space Complexity
O(1)
## Edge Cases
