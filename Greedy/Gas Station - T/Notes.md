# Notes

## Approach
1. Check if sum of gas is greater than cost since that is basic requirement.
2. Calculate difference of gas and cost of each index.
3. If it is negative, set total to 0 and mark the next index as start. 
*Can handle if start is set to out of bounds, so we can return -1.
4. Check code for further details.
## Mistakes
Tricky problem
## Time Complexity
O(N)
## Space Complexity
O(1)
## Edge Cases