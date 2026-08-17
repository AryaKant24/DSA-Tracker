# Notes

## Approach
1. Two loop approach where TC is O(max(arr)*N);
2. Binary Search
3. Create an array of range 1 to max(arr)
5. Find mid and pass it to calculateHours. Mid acts as rate
6. If the totalHours<=time till guards come we are on the right track and need to minimize time so move to left half.
7. Else it means we are low on time then move to right half
*Return left*
## Mistakes
Type conversion
## Time Complexity
O(max(arr)*log(N));
## Space Complexity
O(1)
## Edge Cases