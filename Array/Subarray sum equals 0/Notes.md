# Notes

## Approach
1. When see subarray and sum use prefixsum and hashmap{prefixSum, index}
2. When a prefixsum of 0 is encounter just store the value of i+1 since that is a lucky case
3. Check whether the prefix Sum exists in the hash map
4. If it does take max of i - mpp[prefixSum] and maxlen
5. If it doesnt add mpp[prefixSum] = i in hashmap
## Mistakes
1. Store the oldest occurence of the prefixSum in the map as that helps count longest subarray.
## Time Complexity
O(N)
## Space Complexity
O(N)
## Edge Cases