# Notes
pq<data_type, container, components>
usually for Dijkstra vector<pair<int, int>> is the container
greater<vector<pair<int,int>>> returns the greatest based on first index and if same considers the second index
## Approach
1. Create a priority queue: {distabce, source}
2. Create a distance array with all distances set to infinity
3. Push source and 0 distance into queue and mark source as visited
4. While pq is not empty do the following
5. If distance of node plus distance to neighbor is less than distance of neighbor update ditance of neighbor.
6. Push the update into pq
7. Return the distance array.
## Mistakes

## Time Complexity

## Space Complexity

## Edge Cases