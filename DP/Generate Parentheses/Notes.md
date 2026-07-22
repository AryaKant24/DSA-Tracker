# Notes
Take it easy. This is a chill problem.
## Approach
Use two variables open and close to keep track of opening and closing brackets.
If open<n: add '(', open+1
If close<open: add ')', close+1
## Mistakes
Easy to complicate it. 
## Time Complexity
 O(2^n) (Catalan number): C(n) = (2n)! / (n!(n+1)!) is the number of valid sequences.
Each sequence takes O(n) to build.
So, total complexity: O(C(n) × n)
## Space Complexity
O(n) recursion depth.
O(C(n) × n) to store results.
## Edge Cases