# Notes

## Approach
1. Generate all sub arrays and check sum. O(N^2)
2. Prefix Sum method -> AMAZING
    k - x           x
<<-------------><--------->>
|  PREFIX SUM            |

Need to find the portion k-x

Approach: Use a hash map
Calculate the occurences of each PrefixSum
Increment counter by the number of occurences of (k-x)
## Mistakes
[0,1] indicates that 0 difference occurs once first
## Time Complexity
o(n)
## Space Complexity
o(1)
## Edge Cases