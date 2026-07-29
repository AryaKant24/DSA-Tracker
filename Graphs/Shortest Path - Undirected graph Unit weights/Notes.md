# Notes

## Approach
Breadth First Search
## Mistakes
1+distance[node]<distance[it]
This is important i.e. the 3 values
distance[node]:distance of node popped out from queue
distance[it]:distance to neighbor

So 1 + distance[node] is the distance to neighbor from node plus the distance to reach node
## Time Complexity
O(V+2E)
## Space Complexity

## Edge Cases
Unreachable nodes