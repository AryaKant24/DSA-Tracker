# Notes
The question 1765. Map of highest peak is same just have to mark initially all 1s i.e. water.
## Approach
1. Use a queue of the format (i, j), distance.
2. Push into queue all the positions where the digit is 0.
3. Mark that index as visited
4. Pop from queue
5. distance[i][j] = dist
6. When inserting into queue: insert (nrow, ncol), dist+1;
## Mistakes
Keep the original matrix untampered
Create different visited and distance matrices.
## Time Complexity

## Space Complexity

## Edge Cases