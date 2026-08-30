# Notes

## Approach
1. Convert given LL to an array
2. Pass the array from 0 to size-1 to recursive fn
3. If left>right return NULL
4. root.left = (arr, left, mid-1)
5. root.right = (arr,mid+1,right)
6. return root
## Mistakes

## Time Complexity

## Space Complexity

## Edge Cases
Empty LL