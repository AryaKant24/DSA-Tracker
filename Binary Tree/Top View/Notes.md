# Notes
In bottom view remove the mpp condition and just do mpp[level] = node
## Approach
1. Create a map(not an unordered one since this stores in sorted order)
2. Create a queue to hold node and level
3. Push root, 0 into queue
4. If mpp doesnt contain that level yet do mpp[level] = node
5. Push node's left and right if exist into queue
## Mistakes

## Time Complexity
O(N)
## Space Complexity
O(N)
## Edge Cases
