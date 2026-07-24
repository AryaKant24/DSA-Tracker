# Notes

## Approach
Could solve with extra space by taking another array.
Normalize k
1. Interate from i = n- k to end and insert into array
2. Interate from i = 0 to n-k and insert into array
3. 0----------n-k---------n

Smart solution:
1. Normalize k
2. Reverse array
3. Reverse begin + k, end
4. Reverse begin, begin + k
## Mistakes
Extra space is not required.
There is a trick to solve this
## Time Complexity
Reversing uses O(N)
## Space Complexity
O(1)
## Edge Cases