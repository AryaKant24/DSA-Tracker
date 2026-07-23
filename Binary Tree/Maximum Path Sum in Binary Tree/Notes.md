# Notes

## Approach
This is the modified version of Maximum Diameter of Binary Tree.
Treat each node as your problem.
1. Maintain a global counter.
2. Calculate left path sum and right path sum for each node
3. Update counter if the sum of node's value, left path sum, right path sum is greater than counter.
*If any path sum returns a negative value, take maximum of 0 and that value to prevent negative entries*
4. Return the sum of node's value and maximum of left path sum and right path sum.
5. The counter is your answer.
## Mistakes
Initialize the global counter to INT_MIN first!
## Time Complexity
O(N)
## Space Complexity
O(Height)
## Edge Cases
Negative Path Sums:
Handle them by taking max of 0 and path sum to prevent negatives!