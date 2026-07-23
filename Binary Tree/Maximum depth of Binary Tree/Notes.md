# Notes

## Approach
Recursion. 
1. Check left height and right height
2. Return maximum of left height and right height.

Using Level Order Traversal
Maintain a counter.
1. Use a *queue*
2. Keep track of queue size and increment counter while q is not empty.
3. Iterate for the size of the queue while pushing neigbors into queue
4. Calculate size of queue again
5. Repeat till queue is not empty
## Mistakes
Recursion increases the TC
## Time Complexity
O(N)
## Space Complexity
O(N)
## Edge Cases