# Notes

## Approach
Place every element in correct position
13,10,5,4,1
1. 13 | 10,5,4,1
2. 10,13 | 5,4,1
3. 5,10,13 | 4,1
...

Increase window size compare adjacent and go on till you place in correct position
## Mistakes

## Time Complexity
O(N^2) -> Average, Worst
Best: O(N)
## Space Complexity
O(1)
## Edge Cases