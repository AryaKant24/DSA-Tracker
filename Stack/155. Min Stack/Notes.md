# Notes

## Approach
1. Basic stack operations
The twist:
1. We need to keep track of the last min we encountered which might change when we pop
2. So use a stack pair where the first element is the value whereas the second is the last minimum encountered
3. Also could use two stacks but I found this approach original and better.
## Mistakes
Dont use a variable to track the last minimum since that complicates things a lot and most probably won't work
## Time Complexity

## Space Complexity

## Edge Cases
Luckily no edge cases