# Notes

## Approach
Could solve using level order traversal and returning the maximum length amongst the levels
The best method:
1. Maintain a a global counter
2. Break down the problem and treat each individual node as the problem itself
3. Calculate the left depth and right depth of a node.
4. If left depth + right depth is greater than the counter, update the counter.
5. Return the maximum of left depth and right depth along with current depth i.e. 1.
## Mistakes
Level order traversal is ineffective for this problem
## Time Complexity
O(N)
## Space Complexity
O(Height)
## Edge Cases