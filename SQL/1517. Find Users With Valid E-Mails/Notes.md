# Notes

## Approach
You have to use regular expressions in SQL using REGEXP
^[A-za-z] ensures starting character is an alphabet
[A-Za-z0-9._-] ensures permitted characters
* ensures any number of times the second sequence
@leetcode.com$ - ensures string ends there
BINARY LIKE '%leetcode.com' ensures domain is case sensitive
## Mistakes

## Time Complexity
O(N)
## Space Complexity
O(1)
## Edge Cases
Domain is case sensitive