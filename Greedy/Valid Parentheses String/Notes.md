# Notes

## Approach
First used DP to handle 3 cases: * is '(', ')', or ''
Used memoization to solve it.
Best approach was Greedy.
Maintain two variables - min and max
Trimming the range from the negative side
## Mistakes
Not every problem that requires recursion should be solved with DP

## Time Complexity
DP: O(N^3)
Memo: O(N^2)  
Greedy: O(N)  
## Space Complexity
DP: O(N)
Memo: O(N^2)
Greedy:O(1)
## Edge Cases