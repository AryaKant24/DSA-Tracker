# Notes

## Approach
A tree is nothing but a directed graph
1. Do BFS on the tree and use a map to store <child, parent>
2. Create a visited set so that you dont loop back to parent or visited node
3. Start the BFS on the target but using a queue!! Go up to parent and down to children.
4. Maintain a distance counter to stop when you reach k.
5. When you push a node to q also add it to visited.
6. Always check if the node - parent or child is not included in the visited set.
7. The nodes remaining in the queue are the answer
## Mistakes

## Time Complexity
O(N)
## Space Complexity
O(N)
## Edge Cases
Root is your target - but thats easy then